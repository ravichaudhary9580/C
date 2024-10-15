#include<stdio.h>
//Program 1
int f1()
{
    char str[50] = "Ravi Chau";
    int count=0;
    for(int i=0;str[i];i++){
        count++;
    }
    printf("Length of String is: %d",count);
}

//Program 2
int f2()
{
    char ch,str[]="ravi chaudhary";
    int count=0;
    printf("Enter a character to count its occurence:");
    scanf("%c",&ch);
    for(int i=0;str[i];i++){
        if(ch==str[i])
            count++;
    }
    printf("Number of Occurence of %c is: %d",ch,count);
}

//Program 4
int f3()
{
    char str[]="my name is ravi chaudhary";
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        count++;
    }
    printf("No. of vowels is : %d",count);
}

//Program 4
int f4()
{
    char str[]="my name is ravi chaudhary";
    int space=0;
    for(int i=0;str[i];i++){
        if(str[i]==' ')
        space++;
    }
    printf("No. of space is : %d",space);
}

//Program 5
int main()
{
    char str[]="ravi chaudhary";
    for(int i=0;str[i];i++){
        if(str[i]==32)
            ;
        else
            str[i]=str[i]-32;
    }
    printf("%s",str);
}