#include<stdio.h>
#include<string.h>

//Program 1
void sort_string(char str[])
{
    strlwr(str);
    int i,j,l;
    char temp;
    l=strlen(str);
    for(j=0;j<l-1;j++)
    {
        for(i=0;i<l-j-1;i++)
        {
            if(str[i]>str[i+1])
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
}
void countfrequency(char str[])
{
    sort_string(str);
    int i,j,count;
    for (i=0;str[i];i++)
    {
        if(str[i]==str[i+1])
        {
            for(j=0;str[j]||str[j]==str[i];j++)
        }
       
        printf("Frequency of %c is %d\n",str[i],count);
    }// Ek hi issue hai ki har charecter ke liye print ho raha hai
}

int findword(char str[],char word[])
{
    int i,j=0,l;
    for(i=0;str[i];i++)
    {
        if(word[j]==str[i])
        {   i=1;
            for(j=1;word[j];j++)
            {
                if(word[j]==str[i])
                i++;
                else
                break;
            }
        }
    }
    l=strlen(word)-1;
    if(j==l)
    return 1;//Word found
    else
    return 0;// Not found
}


int in()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    sort_string(str);
    printf("%s",str);

    /* char str[50],word[20];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a word:");
    fgets(word,20,stdin);
    word[strlen(word)-1]='\0';
    printf("%d",findword(str,word)); */
    return 0;
}
