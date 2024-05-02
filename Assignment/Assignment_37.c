#include<stdio.h>
int count_vowel(char str[]);


//Program 1
int count_vowel(char str[])
{
    int i , count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        count=count+1;
    }
    return count;
}


//Program 2

int find_char(char str[], char ch)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(ch==str[i])
        {
            return i;
            break;
        }
    }
    
}
int main()
{
    char str[]="rvai";
    printf("%d",count_vowel(str));
    return 0;
}