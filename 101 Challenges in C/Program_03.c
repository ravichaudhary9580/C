#include<stdio.h>
//Two numbers are input through keyboard into two locations x and y. Write a program to interchange the content of x and y.
// Method 1 ****Using 3 Variables****
int main()
{
    int x,y,z;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before %d %d",x,y);
    z=x;
    x=y;
    y=z;
    printf("After %d %d",x,y);
    return 0;
}
// Method 2 ****Using 2 Variables----Arithmetic operations****
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before %d %d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;

    //x=x*y;
    //y=x/y;
    //y=x/y;
    
    //x=x+y - (x=y);
    
    printf("After %d %d",x,y);
    return 0;
}
// Method 3 ****Using Bitwise Operation****
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    printf("Before %d %d",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("After %d %d",x,y);
    return 0;
}