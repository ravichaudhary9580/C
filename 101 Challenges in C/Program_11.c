//If a year is input through the keyboard, write a program to determine wheather the year is leap or not.
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter a year:");
    scanf("%d",&yr);
    if(yr%100==0)
        if(yr%400==0)
        printf("Leap Year");
        else 
        printf("Not a Leap Year");
    else if(yr%4==0)
    printf("Leap Year");
    else
    printf("Not a Leap Year");
    return 0;
}