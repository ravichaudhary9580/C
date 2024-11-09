#include<stdio.h>
#include<string.h>
//Program 1
int f1()
{
    char str[]="RAVI CHAUDHARY";
    for(int i=0;str[i];i++){
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }
    printf("%s",str);
}

//Program 2
int f2()
{
    char str[]="ravic";
    int len;
    char temp;
    len= strlen(str);
    for(int i=0;i<len/2;i++){
        temp=str[len-1-i];
        str[len-1-i]=str[i];
        str[i]=temp;
    }
    printf("%s",str);
}

//Program 3
int f3()
{
    int countAlpha=0,countDigit=0,countSpecial=0;
    char str[]="ravichaudhary7570@gmail.com";
    for(int i=0;str[i];i++){
        if(str[i]>=65&&str[i]<=90 || str[i]>=97&&str[i]<=122)
            countAlpha++;
        else if(str[i]>=48&&str[i]<=57)
            countDigit++;
        else
            countSpecial++;
    }
    printf("Alphabet- %d   Digit- %d   Special Character- %d",countAlpha,countDigit,countSpecial);
} 

//Program 4
int f4()
{
    char str1[]="Ravi Chaudhary";
    int len;
    len=strlen(str1);
    char str2[len];
    for(int i=0;i<=len;i++){
        str2[i]=str1[i];
    }
    printf("%s",str2);
}

//Program 5
int main()
{
    char ch,str[]="Ravi Chaudhary";
    int i;
    printf("Enter a character to find its first occurrence:");
    scanf("%c",&ch);
    for(i=0;str[i];i++){
        if(ch==str[i])
            break;
    }
    if(str[i]==0)
        printf("Character not found");
    else
        printf("Index of first occurrence of '%c' is %d",ch,i);
}