#include<stdio.h>
//Q1
void f1()
{
    int i,,sum=0,a[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<=9;i++)
        sum = sum+a[i];
    printf("Sum is %d",sum);

}
//Q2
void f2()
{
    int i,,sum=0,a[10];
    float avg;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<=9;i++)
        sum = sum+a[i];
    avg=sum/10.0;

    printf("Average is %f",avg);

}
//Q3
void f3()
{
    int i,se=0,so=0,a[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            se = se+a[i];
        else
            so=so+a[i];
    }
    printf("Sum of even numbers is %d",se);
    printf("\nSum of odd numbers is %d",so);

}
//Q4
void f4()
{
    int i,max,a[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        
    max=a[0];
    for(i=1;i<=9;i++)
        if(max<a[i])
            max=a[i];
    printf("Max value is %d",max);

}

//Q5
void f5()
{
    int i,min,a[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        
    min=a[0];
    for(i=1;i<=9;i++)
        if(min>a[i])
            min=a[i];
    printf("Min value is %d",min);

}