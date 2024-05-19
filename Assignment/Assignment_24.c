#include<stdio.h>



//Program 1

int check_prime(int n)
{
    int i=2;
    if(n<2)
    return 0;
    while(i<n)
    {
        if(n%i==0)
        return 0;
        i++;
    }
    return 1;
}

void all_Prime_bw_2(int a, int b)
{
    for(a;a<b;a++)
    {
        if(check_prime(a))
        {
            printf("%d ",a);
        }
    }
}


// //Program 1.1

void count_prime(int a, int b)
{
    int count=0;
    for(a;a<b;a++)
    {
        if(check_prime(a))
        {
            count=count+1;
        }
    }
     printf("%d ",count);
}

//Program 2

void first_N_fibo(int n)
{
    int a=-1,b=1,c,i=1;
    while(i<=n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
}

//Program 3

void pascal_triangle()
{
     int i,j;
     for(i=1;i<=4;i++)
     {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)   // Need to visit Again
            printf("%d");
            else
            printf(" ");
        }
        printf("\n");
     }
}

//Program 4
int isArmstrong(int n)
{
    int m,digitcount=0,r;
    int p,i,sum=0;
    m=n;
    while(m)
    {
        digitcount++;
        m=m/10;
    }
   for(m=n;m;m=m/10)
   {
        r=m%10;
        for(p=1,i=1;i<=digitcount;i++)
        {
            p=p*r;
        }
        sum=sum+p;
   }
    if(sum==n)
    return 1;
    else 
    return 0;
}

void print_all_armstrong_bw_two(int a,int b)
{  
    
    for(a;a<=b;a++)
    {
    if(isArmstrong(a))
    printf("%d ",a);
    }
}


//Program 5


//Need to visti again

int main()
{
    // int n;
    // printf("Enter a number:");
    // scanf("%d",&n);
    print_all_armstrong_bw_two(1,200);
    return 0;
}