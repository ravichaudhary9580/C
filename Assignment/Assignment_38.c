#include<stdio.h>

//Program 1

int checkPalindrome(char str[],int size)
{
    int i;
    for(i=0;i<size-2;)
    {
        if(str[i]==str[size-2-i])
        {
            i++;
        }
        else
        break;
    }
    if(i==(size-2))
    return 1;
    else
    return -1;
}


//Program 2

 void trim(char str[])
 {
    int i;
    for(i=0;str[i];i++)
    {
    if(str[i]==' ')
    {
        str[i]=0;
    }
    }
    printf("%s",str);
 }


//Program 3
int count_words(char str[])
{
    int i,count=0;
    for(i=0;str[i];)
    {
        if(64<str[i]&&str[i]<91||96<str[i]&&str[i]<123)
        {
            count=count+1;
            while(str[i]!=32)
            {
                i++;
            }
        }
        while(str[i]==32)
            {
                i++;
            }    
    }
    return count;
}








void any_string_to_lower(char str[])
{
  int i;
  for (i = 0; str[i]; i++)
  {
    if(96<str[i] && str[i]<123)
    str[i]= str[i] - 32;

    if (str[i] == 32)
      str[i] = 0;

    str[i] = str[i] + 32;
  }
  for (i = 0; str[i]; i++)
    printf("%c", str[i]);
}


//Program 5
int insensitive_compare(char str1[], char str2[])
{
    str1=any_string_to_lower(str[1]);
    str2=any_string_to_lower(str[2]);
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


int main()
{
    char str[44]=" ravi mda dda ddrf dsg  gh  fs  fg dfg  sir";
    int size=8;
    // printf("%d",checkPalindrome(str,size));
    // trim(str);
    printf("%d",count_words(str));
    return 0;
}