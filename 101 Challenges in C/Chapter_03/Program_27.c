//Program 27
//The exponential function eˣ is defined as the sum of the following series:
// 1 + (x¹/1!) - (x²/2!) + (x³/3!) + (x⁴/4!)+...
//If x is input through the keyboard, write a program to calculate the sum of first ten terms of this series.
#include<stdio.h>
#include<math.h>
int main()
{   int fact=1;
    float x,exp,result,term;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    for(int i=1;i<=10;i++)
    {  fact = fact*i;
       term = pow(x,i)/(fact*1.0);
       exp = exp+term;
    }
    printf("exp = %f\n",exp);
    result = 1+exp-(x*x/2);
    printf("exp = %f",result);
    return 0;
}