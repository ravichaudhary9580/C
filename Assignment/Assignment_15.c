#include<stdio.h>

//Program 1
/* int main()
{
    int n=2,i;
    while(n<=100)
    {    
        for(i=2;i<n;i++)
            {
                if(n%i==0)
                break;
            }
        if(i==n)
         printf("%d ",n);          
    n++;
    }
   return 0;
} */

//Using for loop only
/* int main()
{
    int n,i,count;
    for(n=2;n<=100;n++)
    {
        count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        printf("%d ",n);
    }
    return 0;
} */

//Program 2
/*int main()
{
    int i,a,b,count=0;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    // a=a<b?a:b;
    while(a<=b)
    {    
        for(i=2;i<a;i++)
            {
                if(a%i==0)
                break;
            }
        if(i==a)
        count=count+1;          
        //  printf("%d ",a);          
    a++;
    }
    printf("No. of Prime: %d",count);
   return 0;
}*/

//Program 3

/* int main()
{ 
    long int i = 2, n;
    printf("Enter a number:");
    scanf("%ld", &n);
    for(n++;;n++)
    {
       for(i=2;i<n;i++)
        {
            if (n%i==0)
            break;
        }       
        if(i==n){
            printf("%d",n); 
            break;} 
    }
    return 0;
} */

/* int main()
{
    int n,i,count;
    printf("Enter a number:");
    scanf("%d",&n);
    n=++n;
    while(n)
    {
        for(i=1,count=0;i<=n;i++)
        {
            if(n%i==0)
            {count=count+1;}
        }
        if(count==2)
        {
            printf("%d",n);
            break;
        }
        else
        n++;
    }
    return 0;
} */

//Program 4

/*int main()
{
    int a,b,H;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    H=a<b?a:b;
    while(H)
    {
        if(a%H==0&&b%H==0)
        break;
        H--;
    }
    printf("HCF is %d",H);
    return 0;
}*/

/* int main()
{
    int H,a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b;H;H--)
    {
        if(a%H==0&&b%H==0)
        {
        printf("%d",H);
        break;
        }
    }
    return 0;
}
 */

//Program 5
/*int main()
{
   int a,b,H;
   printf("Enter two number:");
   scanf("%d %d",&a,&b);
   H=a<b?a:b;
   while(H>1)
   {
        if(a%H==0&&b%H==0)
        {
            printf("Not Co-prime");
            break;
        }
        H--;
   }
   if(H==1)
   printf("Co-Prime");
   else
    printf("Not co-prime");
    return 0;
}*/


 /* int main()
{
    int H,a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    for(H=a<b?a:b;H;H--)
    {
        if(a%H==0&&b%H==0)
        {
        break;
        }
    }
    if(H==1)
    printf("%d %d are co-prime",a,b);
    else
    printf("Not co-prime");
    return 0;
} */