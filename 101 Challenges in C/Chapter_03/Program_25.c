//Program 25
//The natural logarithm can be approximated by the following series
//(x-1)/x + ((1/2)(x-1)²)/2 + ((1/3)(x-1)³)/3 + .....
//If x is input through the keyboard, write a program to calculate the sum of first terms of this series.
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float result=0;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(int i=1;i<=7;i++)
    result = result + ((1.0/i)*pow((x-1.0)/(x*1.0),i));

    printf("\nln(%d) = %f",x,result);
    return 0;
}