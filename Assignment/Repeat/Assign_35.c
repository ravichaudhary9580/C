#include<stdio.h>
#include<string.h>
//Program 1
int f1()
{
    char str[]="RAVI CHAUDHARY";
    for(int i=0;str[i];i++){
        if(str[i]==32)
            ;
        else
            str[i]=str[i]+32;
    }
    printf("%s",str);
}

//Program 2
int main()
{
    char str[]="ravi chaudhary";
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