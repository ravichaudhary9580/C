#include<stdio.h>


//Program 1

/* int main()
{
    int a=-1,b=1,c,n;
    printf("Find Nth term in Fibonacci:");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("\nNth term is %d",c);
    return 0;
} */

//Program 2

/*  int main()
{
    int a=-1,b=1,c,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}  */


//Program 3

/* int main()
{
    int a=-1,b=1,c,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        if(c>=n)
            break;
        a=b;
        b=c;
    }
    if(c==n)
        printf("Exist");
    else 
        printf("Not");
    return 0;
} */


//Program 4
/* int main()
{
    int n,m,digitcount=0,r;
    int p,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
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
    printf("%d is Armstrong",n);
    else 
    printf("%d is Not Armstrong",n);

    return 0;
} */

//Program 5
/* int main()
{
    int n=1,m,digitcount,r;
    int p,i,sum,c=1;
    
    while(n<100000000)
    {
        m=n;
        digitcount=0;
        while(m)
        {
            digitcount++;
            m=m/10;
        }
        for(m=n,sum=0;m;m=m/10)
        {
            r=m%10;
            for(p=1,i=1;i<=digitcount;i++)
            {
                p=p*r;
            }
            sum=sum+p;
        }
        if(sum==n)
        {
        printf("\n%d-   %d ",c,n);
        c++;
        }
        n++;
    }

    return 0;
}
 */
