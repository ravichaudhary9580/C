#include <stdio.h>
#include <string.h>
// Program 1
int string_len(char str[])
{
  for (int i = 0; str[i]; i++)
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

char *reve(char str[])
{
  int i, l;
  char temp;
  l = strlen(str);
  for (i = 0; i < l / 2; i++)
  {
    temp = str[i];
    str[i] = str[l - 1 - i];
    str[l - 1 - i] = temp;
  }
  return str;
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
char *string_upper(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
  }
  return str;
}

// Program 5
char *string_lower(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] = str[i] + 32;
  }
  return str;
}

char *any_string_to_lower(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if (96 < str[i] && str[i] < 123)
      str[i] = str[i] - 32;

    if (str[i] == 32)
      str[i] = 0;

    str[i] = str[i] + 32;
  }
  return str;
}

int main()
{
  char str[15] = "Ravi chaudhary";
  char str1[] = "ravi";
  char str2[] = "ravi";
  // printf("%d",string_len(str));

  // char str[25];
  // printf("Enter a string in Lower case:");
  // gets(str);
  // string_upper(str);
  // any_string_to_lower(str);
  // reverse(str, 15);
  // printf("%s",reve(str));
  printf("%d", compare(str1, str2));
  return 0;
}