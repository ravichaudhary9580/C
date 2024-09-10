//Write a program to receive 5 numbers from keyboard and then report which is the biggest of the 5 number.
#include<stdio.h>
f1()
{
    int a,b,c,d,e,big;
    printf("Enter 5 numbers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    big=a;
    if(b>big)
    big=b;
    if(c>big)
    big=c;
    if(d>big)
    big=d;
    if(e>big)
    big=e;
    printf("Biggest number is: %d",big);
    return 0;
}
