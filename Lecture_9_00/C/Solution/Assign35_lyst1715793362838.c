#include<stdio.h>
#include<string.h>
void f1()
{
    char str[50];
    int i,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
}
void f2()
{
    char str[50],ch;
    int i,l;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("%s",str);
}
void f3()
{
    char str[50],ch;
    int i,alphaCount=0,digitCount=0,otherCount=0;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    
    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
            alphaCount++;
        else if(str[i]>='0'&& str[i]<='9')
            digitCount++;
        else
            otherCount++;
    }
    printf("\nTotal Alphabets: %d",alphaCount);
    printf("\nTotal Digits: %d",digitCount);
    printf("\nTotal Special Characters: %d",otherCount);

}
void f4()
{
    char str1[50],str2[50];
    int i;
    printf("Enter a string");
    fgets(str1,50,stdin);
    str[strlen(str1)-1]='\0';
    //copy str1 data into str2
    for(i=0;str1[i];i++)
        str2[i]=str1[i];
    str2[i]='\0';
    printf("%s",str2);
}
void f5()
{
    char ch,str[50];
    int index;
    printf("Enter a string");
    fgets(str1,50,stdin);
    str[strlen(str1)-1]='\0';
    printf("Enter a character");
    scanf("%c",&ch);

    for(index=0;str[index];index++)
        if(str[index]==ch)
            break;
    if(!str[index])
        printf("%c not found",ch); 
    else
        printf("First occurrence of %c is found at index %d",ch,index);

}