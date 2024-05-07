#include<stdio.h>

//Program 1

int checkPalindrome(char str[],int size)
{
    int i;
    for(i=0;i<size-2;)
    {
        if(str[i]==str[size-2-i])
        {
            i++;
        }
        else
        break;
    }
    if(i==(size-2))
    return 1;
    else
    return -1;
}


//Program 2

 



int main()
{
    char str[]="mdaddam";
    int size=8;
    printf("%d",checkPalindrome(str,size));
    return 0;
}