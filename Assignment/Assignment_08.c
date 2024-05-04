#include <stdio.h>

// Program 1
/*int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
   if(n>99&&n<1000||n>-1000&&n<-99)
   {
    printf("Its a three digit number");
   }
   else
   printf("Not a three digit number");
    return 0;

}*/

// Program 2

/*int main()
{
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is Greater.",a);
    }
    if(a==b)
    {
        printf("%d",a);
    }
    if(b>a)
    {
        printf("%d is Greater.",b);
    }
    return 0;
}*/

// Program 3
/*int main()
{
    int d;
    printf("Enter value of d :");
    scanf("%d",&d);
    if (d>0)
    {
        printf("Root are Real");
    }
    if (d==0)
    {
        printf("Root are Real and Equal");
    }
    if(d<0)
    {
        printf("Roots are Imaginary");
    }
    return 0;
}*/

// Program 4
/*int main()
{
    int n;
    printf("Enter a year:");
    scanf("%d", &n);
    if (n%100==0)
    {
        if(n%400==0)
        printf("Leap Year");
        else
        printf("Not a Leap Year");
    }
    else if(n%4==0)
        printf("Leap Year");
    else
    printf("Not a Leap Year");
    return 0;
}*/


//Program 5
/*int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b&&b==c)
    {
        printf("%d",a);
    }
    else if (a>b&&b>c)
    {
    printf("%d is Greatest",a);
    }
    else if (b>a&&b>c)
    {
        printf("%d is Greatest",b);
    }
  
    else
    {
        printf("%d is Greatest",c);
    }
    return 0;
}*/

//Method 2

/*int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        {
             if(a>c)
                printf("%d",a);
            else
                printf("%d",c);
        }
    else
        {
            if(b>c)
                printf("%d",b);
            else
                printf("%d",c);
        }
    return 0;
}*/


//In Single Line 

int main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);   
    printf("%d",a>b?   a>c?a:c  :  b>c?b:c);
    
    return 0;
}