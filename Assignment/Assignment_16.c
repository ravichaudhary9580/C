#include<stdio.h>


//Program 1

/* int main()
{
    int a=0,b=1,c,n,m,sum1=0;
    printf("Find Nth term in Fibonacci:");
    scanf("%d",&n);
    m=n-2;
    while(n>1)
    {
        c=a+b;
        sum1=sum1+c;
        a=b;
        b=c;
        n--;
    }
    printf("%d ",sum1);
    
    int p=0,q=1,r,sum2=0;
    while(m)
    {
        r=p+q;
        sum2=sum2+r;
        p=q;
        q=r;
        m--;
    }
    printf("%d ",sum2);

    printf("\nNth term is %d",sum1-sum2);
    return 0;
} */

//Program 2

/* int main()
{
    int a=0,b=1,c,i=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
} */


//Program 3
/* 
int main()
{

}
 */

//Program 4
/* int main()
{
    int n,m,sum=0,x,cube;
    printf("Enter a number:");
    scanf("%d",&n);
    
    m=n;
    while(n>0)
    {
        x=n%10;
        n=n/10;
        cube=x*x*x;
        sum=sum+cube;
    }
    if(m==sum)
    printf("Armstrong");
    else 
    printf("Not");

    return 0;
} */


int main()
{
    int m,sum=0,x,cube;
    int i;
    for(i=10;i<160;i++)
    {
    m=i;
    while(i)
    {
        x=i%10;
        i=i/10;
        cube=x*x*x;
        sum=sum+cube;
    }
    if(m==sum)
    printf("%d",m);
    }
    return 0;
}