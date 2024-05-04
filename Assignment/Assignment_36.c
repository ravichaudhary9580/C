#include <stdio.h>

// Program 1
int string_len(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
    ;
  return i;
}

// Program 2
void reverse(char str[], int size)
{
  int i;
  char rev[size];
  for (i = 0; i < size - 1; i++)
  {
    rev[i] = str[size - 2 - i];
  }
  rev[size - 1] = ' ';
  printf("%s", rev);
}

// Program 3

int compare(char str1[], char str2[])
{
  int i;
  for (i = 0; str1[i];)
  {
    if (str1[i] < str2[i])
      return -1;
    else if (str1[i] > str2[i])
      return 1;
    else
      i++;
  }
  return 0;
}

// Program 4
void string_upper(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == 32)
      str[i] = 64;

    str[i] = str[i] - 32;
  }
  // for(i=0;str[i];i++)
  // printf("%c",str[i]);
  printf("%s", str);
}

// Program 5
void string_lower(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == 32)
      str[i] = 0;

    str[i] = str[i] + 32;
  }
  for (i = 0; str[i]; i++)
    printf("%c", str[i]);
}

int main()
{
  // char str[15] = "Ravi chaudhary";
  char str1[]="ravi";
  char str2[]="radha";
  // printf("%d",string_len(str));

  // char str[25];
  // printf("Enter a string in Lower case:");
  // gets(str);
  // string_upper(str);
  // reverse(str, 15);

  printf("%d",compare(str1,str2));
  return 0;
}