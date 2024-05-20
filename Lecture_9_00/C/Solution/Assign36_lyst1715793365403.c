#include<stdio.h>
#include<string.h>

int length(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
char* reverse(char str[])
{
    int l,i;
    char ch;
    l=length(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    return str;
}
int compare(char s1[],char s2[])
{
    int i;
    if(strlen(s1)!=strlen(s2))
        return 0;
    for(i=0;s1[i];i++)
        if(s1[i]!=s2[i])
            return 0;
    return 1;
}
char* upper(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&& str[i]<='z')
            str[i]-=32;
    }
    return str;
}
char* lower(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
            str[i]+=32;
    }
    return str;
}
int main()
{
    
}