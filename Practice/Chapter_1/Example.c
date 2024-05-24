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


int main()
{
    float km, m, cm, feet, inch;
    printf("Enter the distance between two cities(KM):");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    inch=cm/2.54;
    feet=inch/12;
    printf("\nDistance in Meters:%f",m);
    printf("\nDistance in Centimeters:%f",cm);
    printf("\nDistance in Feet:%f",feet);
    printf("\nDistance in Inches:%f",inch);
    return 0;
}

// Calculation of Aggregate and Percentage mark obtained by a Student 
int main()
{
    int s1,s2,s3,s4,s5,aggr;
    float percent;
    printf("Enter the marks obtained by student in 5 Subject:\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    aggr=s1+s2+s3+s4+s5;
    percent=aggr/5;
    printf("\nAggregate Mark is:%d",aggr);
    printf("\nPercent Mark is:%f",percent);
    return 0;
}