//Program 21
//Write a program to generate all unique combination of 1, 2 and 3 using for loop.
#include<stdio.h>
int main()
{   int count=0;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            for(int k=1;k<=3;k++){
                if(i!=j && j!=k && k!=i){
                    printf("\n%d %d %d",i,j,k);
                    count++;
                    }
            }
        }
    }
    printf("\n%d",count);
    return 0;
}