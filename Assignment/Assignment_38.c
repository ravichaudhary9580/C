#include<stdio.h>
#include<string.h>
//Program 1

void checkPalindrome(char str[])
{
    int i,size;
    size=strlen(str);
    for(i=0;i<size-1;)
    {
        if(str[i]==str[size-1-i])
        {
            i++;
        }
        else
        break;
    }
    if(i==(size-1))
    printf("Palindrome");
    // return 1;//Palindrome
    else
    printf("Not Palindrome");
    // return -1;//Not 
}


//Program 2

 char* trim(char str[])
 {
    int i,l;
    l=strlen(str)-1;
    for(i=l;str[i]==' ';i--)
    str[i]='\0';

    for(i=0;str[i]==' ';i++)
    str[i]='\0';

    return &str[i];
 }


//Program 3
int count_words(char str[])
{
    int i,count=0;
    for(i=0;str[i];)
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
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


//Program 4
void reverse_string_wordwise(char str[])
{

}


//Program 5

char* any_string_to_lower(char str[])
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
return str;
}


int insensitive_compare(char str1[], char str2[])
{
    str1=any_string_to_lower(str1);
    str2=any_string_to_lower(str2);
  int i;
  for (i = 0; str1[i];)
  {
    if (str1[i] < str2[i])
      return -1;//s1 is first in dictonary
    else if (str1[i] > str2[i])
      return 1;//s2 is first in dictonary
    else
      i++;
  }
  return 0;// both are equal 
}


int main()
{
  /* char str[50];
  printf("Enter a string:");
  fgets(str,50,stdin);
  str[strlen(str)-1]='\0';
  checkPalindrome(str); */

/*   char str1[50],str2[50];
  printf("Enter a string:");
  fgets(str1,50,stdin);
  str1[strlen(str1)-1]='\0';
  
  printf("Enter another string:");
  fgets(str2,50,stdin);
  str2[strlen(str2)-1]='\0';
  printf("%d",insensitive_compare(str1,str2)); */

  char str[50];
  
  printf("Enter a string:");
  fgets(str,50,stdin);
  str[strlen(str)-1]='\0';
  printf("%s",trim(str));
  return 0;
}