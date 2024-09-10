#include<stdio.h>
//Write a program to round off an integer i to the next largest multiple of another integer j. For example, 256 days when rounded off to the next largest multiple divisible by a week results int 259.
int main()
{
    int i,j,k;
    printf("Enter the values of i and j: ");
    scanf("%d %d",&i,&j);
    
    k=i+j-i%j;

    printf("Next largest Multiple = %d\n",k);
    return 0;
}