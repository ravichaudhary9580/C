//Program 32
//Write a program to print first 20 terms of fibonacci series.
#include<stdio.h>
int main()
{
    int a=0,b=1,c;
    for(int term=1;term<=20;term++){
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
}