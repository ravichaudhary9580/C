//Write a program to generate all Pythogorean triplets with side length less than or equal to 20.
#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++){
            for(int k=1;k<=20;k++){
                if(i*i+j*j==k*k)
                    printf("%d %d %d\n",i,j,k);
            count++;
            }
        }
    }
    printf("\nCount = %d",count);
    return 0;
}