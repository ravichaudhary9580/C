//Program 28
//Write a program to find the factorial of any number entered through keyboard.
#include<stdio.h>
int main()
{
    int num;
    unsigned long long int fact=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num==0)
    printf("Factorial is : %d",fact);
    else{
        while(num)
        {
            fact=fact*num;
            num--;
        }
        printf("Factorial is : %d",fact);
    }
    return 0;
}