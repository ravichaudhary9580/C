//Paper size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Write a program to calculate and print paper sizes A0,A1,A2,A3,....,A8.
#include<stdio.h>
int main()
{
    int a=1189,b=841;
    printf("Size of A0 paper is: %d x %d\n",a,b);
    printf("Size of A1 paper is: %d x %d\n",b,a/2);
    printf("Size of A2 paper is: %d x %d\n",a/2,b/2);
    printf("Size of A3 paper is: %d x %d\n",b/2,a/4);
    printf("Size of A4 paper is: %d x %d\n",a/4,b/4);
    printf("Size of A5 paper is: %d x %d\n",b/4,a/8);
    printf("Size of A6 paper is: %d x %d\n",a/8,b/8);
    printf("Size of A7 paper is: %d x %d\n",b/8,a/16);
    printf("Size of A8 paper is: %d x %d\n",a/16,b/16);
    return 0;
}