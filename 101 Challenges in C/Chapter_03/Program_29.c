//Program 29
// Ramanujan number is the smallest number that can be expressed as sum of two cubes in two different ways. Write a program to print all such numbers up to a reasonable limit.
#include<stdio.h>
int main()
{
    int count=0,countloop=0;
    for(int i=1;i<=30;i++){
        for(int j=1;j<=30;j++){
            for(int k=1;k<=30;k++){
                for(int l=1;l<=30;l++){
                    countloop++;
                    if((i!=j&&i!=k&&i!=l) && (i!=j&&i!=k&&i!=l) && (i!=j&&i!=k&&i!=l)){
                        if(i*i*i+j*j*j==k*k*k+l*l*l){
                            int num=i*i*i+j*j*j;
                            count++;
                            printf("%d = %d %d || %d %d\n",num,i,j,k,l);
                        }
                    }
                }
            }
        }    
    }
    printf("count = %d\n",count);
    printf("countloop = %d\n",countloop);
    return 0;
}