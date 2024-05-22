#include<stdio.h>
#include<string.h>
//Program 1
void countfrequency(char str[])
{
    int i,j,count;
    for (i=0;str[i];i++)
    {
        for(j=0,count=0;str[j];j++)
        {
            if(str[i]==str[j])
            count=count+1;
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


int main()
{
    /* char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    countfrequency(str); */

    char str[50],word[20];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter a word:");
    fgets(word,20,stdin);
    word[strlen(word)-1]='\0';
    printf("%d",findword(str,word));
    return 0;
}