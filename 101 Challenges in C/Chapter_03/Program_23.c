//Program 23
//Write a program to print all prime from 1 to 300.
#include<stdio.h>
int main()
{
    for(int n=1;n<=300;n++){
        {int i=2;
        while(i<n)
        {
            if(n%i==0)
                break;
            i++;
        }
        if(i==n)
            printf(" %d ",n);
        }
    }
    return 0;
}