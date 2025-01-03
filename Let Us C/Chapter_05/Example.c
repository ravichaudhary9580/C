#include<stdio.h>
//Program 1
//Write a program  to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs.120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.
/* int main()
{
    int employee,time;
    float otpay;
    printf("Enter the number of employee:");
    scanf("%d",&employee);
    while (employee)
    {
        printf("\n%d- Enter the working time of the employee:",employee);
        scanf("%d",&time);
        if(time>40)
            otpay=120*(time-40);
        printf("Over time payment of the employee is:%0.2f",otpay);
        employee--;
    }
    return 0;
} */

//Program 2
//Write a program to find out the factorial of a number entered through the keyboard.
/* int main()
{
    int n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp;
    temp=n;
    while(n)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial of %d is %d",temp,fact);
    return 0;
} */

//Program 3
//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
/* int main()
{
    float base,res=1;
    long int exponent;
    printf("Enter the base and exponent:");
    scanf("%f %d",&base,&exponent);
    int i;
    i=exponent;
    while(i)
    {
        res=res*base;
        i--;
    }
    printf("\nValue of  %f raised to %d is: %f",base,exponent,res);
    return 0;
} */