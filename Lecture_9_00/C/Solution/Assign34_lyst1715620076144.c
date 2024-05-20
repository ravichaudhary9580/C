#include<stdio.h>
#include<string.h>
void f1()
{
    char str[50];
    int i;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++);

    printf("Length is %d",i);
}
void f2()
{
    char str[50],ch;
    int i,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a character");
    scanf("%c",&ch);
    for(i=0,count=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("Count=%d",count);
}
void f3()
{
    char str[50],v[]="aeiouAEIOU";
    int i,j,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
   
    for(i=0,count=0;str[i];i++)
    {
        for(j=0;v[j];j++)
            if(str[i]==v[j])
                count++;
    }
    printf("Vowels=%d",count);
}
void f4()
{
    char str[50],ch=' ';
    int i,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
   
    for(i=0,count=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("Space Count=%d",count);
}
void f5()
{
    char str[50],ch=' ';
    int i,count;
    printf("Enter a string");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
}
int main()
{
    f4();
    printf("\n");
    return 0;
}