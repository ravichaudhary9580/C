#include<stdio.h>
void f1()
{
    int i,a[10],round,t;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(round=1;round<=9;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);

}
void f2()
{
    int i,a[10],max,secondMax;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    max=a[0];
    if(max<a[1])
    {
        secondMax=max;
        max=a[1];
    }
    else
        secondMax=a[1];

    for(i=2;i<=9;i++)
    {
        if(a[i]<=secondMax)
            continue;
        if(a[i]<=max)
        {
            secondMax=a[i];
            continue;
        }
        secondMax=max;
        max=a[i];
    }   
    printf("Second max is %d",secondMax);


}
void f3()
{
    int i,a[10],min,secondMin;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    min=a[0];
    if(min>a[1])
    {
        secondMin=min;
        min=a[1];
    }
    else
        secondMin=a[1];

    for(i=2;i<=9;i++)
    {
        if(a[i]>=secondMin)
            continue;
        if(a[i]>=min)
        {
            secondMin=a[i];
            continue;
        }
        secondMin=min;
        min=a[i];
    }   
    printf("Second min is %d",secondMin);


}
void f4()
{
    int i,a[10],round,t;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(round=1;round<=9;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);

}
void f5()
{
    int i,a[10],b[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
        b[i]=a[i];
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);  
    printf("\n"); 
    for(i=0;i<=9;i++)
        printf("%d ",b[i]); 
}
int main()
{
    f2();
    printf("\n");
    return 0;
}