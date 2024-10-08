#include<stdio.h>
//Program 1
/* int main()
{
    int num[10],sum=0;
    printf("Enter 10 number to calculate sum:\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=9;i++)
    {
        sum=sum+num[i];
    }
    printf("Sum is : %d",sum);
    return 0;
} */

//Program 2
/* int main()
{
    int num[10],sum=0;
    printf("Enter 10 number to calculate sum:\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=9;i++)
    {
        sum=sum+num[i];
    }
    printf("Average is : %f",sum/10.0);
    return 0;
} */

//Program 3
/* int main()
{
    int num[10],evenSum=0,oddSum=0;
    printf("Enter 10 number to calculate sum:\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<=9;i++)
    {
        if(num[i]%2==0)
        evenSum=evenSum+num[i];
        if(num[i]%2!=0)
        oddSum=oddSum+num[i];
    }
    printf("Sum of Evens is %d",evenSum);
    printf("\nSum of Odds is %d",oddSum);
    return 0;
} */

//Program 4
/* int main()
{
    int num[10],greatest;
    printf("Enter 10 number:\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    greatest=num[0];
    for(int i=0;i<=9;i++)
    {
       if(greatest<num[i])
            greatest=num[i];
    }
    printf("Greatest in array is %d",greatest);
    return 0;
} */

//Program 5
/* int main()
{
    int num[10],smallest;
    printf("Enter 10 number:\n");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    smallest=num[0];
    for(int i=0;i<=9;i++)
    {
       if(smallest>num[i])
            smallest=num[i];
    }
    printf("Smallest in array is %d",smallest);
    return 0;
} */