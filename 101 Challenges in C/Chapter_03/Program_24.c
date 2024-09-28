// Program 24
//Write a program to receive a positive integer and find its octal equivalent.
#include<stdio.h>
int main()
{
    int n,oct=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        oct=oct*10+n%8;
        n=n/8;
    }
    
    while(oct){
        n=n*10+oct%10;
        oct=oct/10;
    }
    printf("Octal: %d",n);
    return 0;
}