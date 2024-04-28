#include<stdio.h>
//Q1
void printNEvenReverse(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        printNEvenReverse(n-1);
    }
}
//Q2
void printNSquares(int n)
{
    if(n>0)
    {
        printNSquares(n-1);
        printf("%d ",n*n);
    }
}
//Q3
void dtob(int x)
{
    if(x>0)
    {
        dtob(x/2);
        printf("%d ",x%2);
    }
}
//Q4
void dtoo(int x)
{
    if(x>0)
    {
        dtoo(x/8);
        printf("%d ",x%8);
    }
}
//Q5
void reverse(int x)
{
    if(x>0)
    {
        printf("%d",x%10);
        reverse(x/10);
        
    }
}
int main()
{
    reverse(2508);
    printf("\n");
    return 0;
}