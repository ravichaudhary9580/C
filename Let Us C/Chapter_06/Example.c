#include<stdio.h>
float factorial(int n);
float nth_term(int n);
// Program 1
//Write a program to print all prime numbers from 1 to 300.
/* int main()
{
    int i,n,count=0;
    for(n=1;n<=300;n++)
    {
        i=2;
        while(i<n)
        {
            if(n%i==0)
                break;
            i++;
        }
        if(i==n){
        printf("\n%d is Prime",n);
        count++;}
        else
        printf("\n\033[31m%d is Not Prime\033[0m",n);
    }
    printf("\n\033[1;32mTotal Prime numbers b/w 1 to 300 is %d \033[0m",count);
    return 0;
} */

/* int count_prime(int start,int end)
{
    int i,n,count=0;
    for(n=start;n<=end;n++)
    {
        i=2;
        while(i<n)
        {
            if(n%i==0)
                break;
            i++;
        }
        if(i==n)
        count++;
    }
    return count;
}

int main()
{
    int i,start=-99,end=0,sum=0;
    for(i=1;i<=50;i++)
    {
        start=start+100;
        end=end+100;
        printf("\n\033[32mTotal Prime numbers b/w %d to %d is %d \033[0m",start,end,count_prime(start,end));
        sum=sum+count_prime(start,end);
    }
     printf("\n\033[1;32mTotal Prime numbers b/w 1 to %d is %d \033[0m",end,sum);
    return 0;
} */


//Program 2
//Write a program to add first seven terms of the following series using a for loop.
/* float factorial(int n)
{
    float fact=1.0;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

float nth_term(int n)
{
    return n/factorial(n);
}

int main()
{
    int n;
    float sum_of_series=0.0;
    printf("Enter the number of term to find sum:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum_of_series=sum_of_series+nth_term(i);
    }

    printf("\nSum of %d terms of the series is %f",n,sum_of_series);
    return 0;
} */


//Program 3
//Write a program to print all combinations of 1,2 and 3 using for loop.
/* int main()
{
    int i=1,j=1,k=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                printf("\n %d %d %d",i,j,k);
            }
        }
    }
    return 0;
} */



