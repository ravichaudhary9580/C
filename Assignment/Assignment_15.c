#include<stdio.h>

//Program 1
/*int main()
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
}*/


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

/*int main()
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
}*/

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
    return 0;
}*/