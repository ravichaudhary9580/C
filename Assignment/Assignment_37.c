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

int findFirstOcc(char str[], char ch)
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
    return -1;
}


//Program 3

void findCharBtwIndex(char str[], int start, int end, char ch )
{
    int i;
    for(i=start;i<=end;i++)
    {
        if (ch==str[i])
        {
            printf("%c   -   %d",str[i],i);
            break;
        }
    }
}


//Progarm 4

void swaptwochar(char str[],int a,int b)
{
    char temp;
    temp=str[a];
    str[a]=str[b];
    str[b]=temp;
    printf("%s",str);
}


//Program 5

int checkalphanumeric(char str[])
{
    int i,ch=0,digit=0;
    for(i=0;i<str[i];i++)
    {
        if(64<str[i]&&str[i]<91||96<str[i]&&str[i]<123)
        {
            ch=ch+1;
        }
        if(47<str[i]&&str[i]<58)
        {
            digit=digit+1;
        }  
    }
    if(ch>=1&&digit>=1)
        return 1;

    else
    return 0;
}
        



int main()
{
    char str[]="ravi";
    char ch='c';
    printf("%d",checkalphanumeric(str));
    // swaptwochar(str,0,3);
    // findCharBtwIndex(str,4,8,ch);
    return 0;
}