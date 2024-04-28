#include<stdio.h>
//Q1
int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);
}
//Q2
int sumNOdd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sumNOdd(n-1);
}
//Q3
int sumNEven(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumNEven(n-1);
}
//Q4
int sumNSquares(int n)
{
    if(n==1)
        return 1;
    return n*n+sumNSquares(n-1);
}
//Q5
int sumDigits(int x)
{
    if(x==0)
        return 0;
    return x%10+sumDigits(x/10);
}