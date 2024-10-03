//Program 30
// Write a program to print all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number, For example, 153=(1*1*1)+(5*5*5)+(3*3*3)

/* int main()
{
    int n,temp,count=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
        temp=n;
        while(n){
            n=n/10;
            count++;
        }
        n=temp;
        while(n){ 
            sum=sum+round(pow(n%10,count));
            n=n/10;
        }
        if(temp==sum)
            printf(" %d is Armstrong\n",temp);
        else
            printf(" %d is NOT Armstrong ",temp);
    return 0;
} */
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,count,sum;
    for(n=1 ; n<=50000 ; n++){
        temp=n;
        count=0;
        sum=0;
        while(temp){
            temp=temp/10;
            count++;
        }

        temp=n;
        while(temp){ 
            sum=sum+round(pow(temp%10,count));
            temp=temp/10;
        }
        
        if(n==sum)
            printf(" %d is Armstrong\n",n);
    }
    return 0;
}