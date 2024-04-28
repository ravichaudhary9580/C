#include<stdio.h>

//Program 1
int main()
{
    int a[10],b[10],i,min,p=0;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    }   
    while(p<=9)
    {
    min=a[p];
        for(i=1;i<=9;i++)
        {
            if(min>a[i])
            min=a[i];
        }
    b[p]=min;
    p++;
    }
    for(p=0;p<=9;p++)
    printf("Smallest is:%d",b[p]);
    return 0;
}
