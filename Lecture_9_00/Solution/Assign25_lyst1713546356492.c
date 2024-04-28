#include<stdio.h>
//Q1
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n);
    }
}
//Q2
void printNReverse(int n)
{
     if(n>0)
    {
        printf("%d ",n);
        printNReverse(n-1);
    }
}
//Q3
void printNOdd(int n)
{
    if(n>0)
    {
        printNOdd(n-1);
        printf("%d ",2*n-1);
    }
}
//Q4
void printNOddReverse(int n)
{
     if(n>0)
    {
        printf("%d ",2*n-1);
        printNOddReverse(n-1);
    }
}
//Q5
void printNEven(int n)
{
    if(n>0)
    {
        printNEven(n-1);
        printf("%d ",2*n);
    }
}
/*
1. printN(n) 1 2 3 4 5 ... n
2. printN(n-1) 1 2 3 4 .. n-1
   printf("%d",n); n
3. n==0
*/