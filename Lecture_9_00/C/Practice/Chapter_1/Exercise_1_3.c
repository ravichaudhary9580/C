#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the size of A0 Paper:");
    scanf("%d %d",&a,&b);
    printf("\nThe size of A0 Paper:%d X %d",a,b);
    printf("\nThe size of A1 Paper:%d X %d",b,a/2);
    printf("\nThe size of A2 Paper:%d X %d",a/2,b/2);
    printf("\nThe size of A3 Paper:%d X %d",b/2,a/4);
    printf("\nThe size of A4 Paper:%d X %d",a/4,b/4);
    printf("\nThe size of A5 Paper:%d X %d",b/4,a/8);
    printf("\nThe size of A7 Paper:%d X %d",a/8,b/8);
    printf("\nThe size of A6 Paper:%d X %d",b/8,a/16);
    printf("\nThe size of A8 Paper:%d X %d",a/16,b/16);
    return 0;
}