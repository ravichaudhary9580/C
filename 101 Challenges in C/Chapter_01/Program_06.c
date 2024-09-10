//Consider a currency  system in which there are notes of seven denominations, namely, Rs.1, Rs.2, Rs.5, Rs.10, Rs.50, Rs.100. If a sum Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
#include<stdio.h>
int main()
{
    int N,count=0;
    printf("Enter the Amount:");
    scanf("%d",&N);
    printf("No of Hundreds: %d\n",N/100);
    count=N/100;
    N=N%100;
   
    printf("No of Fifty: %d\n",N/50);
    count=count + N/50;
    N=N%50;

    printf("No of Tens: %d\n",N/10);
    count=count + N/10;
    N=N%10;

    printf("No of Fives: %d\n",N/5);
    count=count + N/5;
    N=N%5;

    printf("No of Twos: %d\n",N/2);
    count=count + N/2;
    N=N%2;

    printf("No of Ones: %d\n",N/1);
    count=count + N/1;
    N=N%1;

    printf("Smallest No. of Notes is: %d",count);
    return 0;
}