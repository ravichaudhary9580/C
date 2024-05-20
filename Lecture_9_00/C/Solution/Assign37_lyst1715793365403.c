#include<stdio.h>
#include<string.h>
int countVowels(char str[])
{
    char v[]="aeiouAEIOU";
    int count,i,j;
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
            if(str[i]==v[j])
            {
                count++;
                break;
            }
            
    }
    return count;
}
int findIndexOf(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
        if(ch==str[i])
            return i;
    return -1;
}
int findIndexOfInRange(char str[],char ch,int startIndex,int endIndex)
{
    int i;
    for(i=stratIndex;str[i]&&i<endIndex;i++)
        if(ch==str[i])
            return i;
    return -1;
}
char* swapCharacters(char str[],int i,int j)
{
    char ch;
    if(i<strlen(str)&&j<strlen(str))
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    return str;

}
int isAlphaNumeric(char str[])
{
    int i,isAlpha=0,isDigit=0;
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
            isAlpha=1;
        else if(str[i]>='0'&&str[i]<='9')
            isDigit=1;
    }
    if(isAlpha&&isDigit)
        return 1;
    return 0;
}