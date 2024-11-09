#include<stdio.h>
int strlen(char str[]);
void reverseString(char str[]);
//Program 1
int strlen(char str[])
{
    int count=0;
    for(int i=0;str[i];i++)
        count++;
    return count;
}

//Program 2
void reverseString(char str[])
{
    int len;
    char temp;
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        temp=str[len-1-i];
        str[len-1-i]=str[i];
        str[i]=temp;
    }
}

//Program 3
int compare(char str1[],char str2[])
{
    //return 0 indicates str1 and str2 are at equal position in dictonary
    //return 1 indicates str1 comes later in dictonary
    //return -1 indicates str2 comes later in dictonary
    int len;
    len=strlen(str1)>strlen(str2)?strlen(str1):strlen(str2);
    for(int i=0;i<len;i++){
       
        if(str1[i]>str2[i])
            return 1;
        else if(str1[i]<str2[i])
            return -1;
        else
            i++;
    }
    return 0;
}

//Program 4
void upperCase(char str[])
{
    for(int i=0;str[i];i++){
        if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
    }
}

//Program 5
void lowerCase(char str[])
{
    for(int i=0;str[i];i++){
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }
}
int main()
{
    char str1[]="ravi";
    char str2[]="ravish";
    char strl[]="ravi chaudhary";
    char stru[]="RAM 13475 897^(&)(CHAUDHARY";
    // printf("Length -  %d ",strlen(str));
    // reverseString(str);
    // printf("%s",str);
    // printf("%d",compare(str1,str2));
    // upperCase(strl);
    // printf("%s",strl);
    lowerCase(stru);
    printf("%s",stru);

    return 0;
}