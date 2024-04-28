#include<stdio.h>
// Calculate Ramesh's Gross Salary
int main()
{
    float bs,da,hra,gs;// Basic_Salary Dearness_Allowance House_Rent_Allowance Gross_Salary
    printf("Enter the RAMESH'S Basic Salary:");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    printf("\nDearness Allowance of RAMESH'S is:%f",da);
    printf("\nHouse Rent Allowance of RAMESH'S is:%f",hra);
    printf("\nGross Salary of RAMESH'S is:%f",bs+da+hra);
    return 0;   
}
