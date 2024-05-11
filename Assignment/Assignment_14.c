#include <stdio.h>

// Program 1

/*int main()
{
    int i=1,fact=1,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
}*/

// Program 2

/*int main()
{
    int n,count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("No. of digits: %d",count);
    return 0;
}*/

// Program 3

/*int main()
{
    long int i = 2, n;
    printf("Enter a number:");
    scanf("%ld", &n);
    while (i < n)
    {
        if (n  % i== 0)
        {
            printf("Not Prime");
            break;
        }
        i++;
    }       
        if(i==n)
        {
            printf("Prime");
         }
    return 0;
}*/

//Method 2
/* int main()
{
    int i, n, count=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1;i<+n;i++)
    {
        if(n%i==0)
        {
            count=count+1;
        }
    }
        if(count>2)
        printf("Not Prime");
        else 
        printf("Prime");
    return 0;

} */

//Program 4

/*int main()
{
    int a,b,L;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    for(L=a>b?a:b; L<a*b;L++)
    if(L%a==0&&L%b==0)
    break;
    printf("LCM is %d",L);
    return 0;
}*/


//Program 5

/*int main()
{
    int x,y=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x)
    {
        y=y*10+x%10;
        x=x/10;
    }
    printf("%d",y);
    return 0;
}*/

 