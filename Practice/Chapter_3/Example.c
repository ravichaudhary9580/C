#include<stdio.h>
//Program 1 
//If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. 
/* int main()
{
    int cp,sp,margin;
    printf("Enter the CP:");
    scanf("%d",&cp);
    printf("Enter the SP:");
    scanf("%d",&sp);
    margin = sp-cp;
    if(sp>cp)
    printf("\n\033[32mProfit is made of %d rupees.\033[0m",margin);
    else if(sp==cp)
    printf("\n\03[32mNo Loss or Profit\033[0m");
    else
    printf("\n\033[31mLoss is made of %d rupees.\033[0m",-1*margin);
    return 0;
} */

//Program 2
//Any integer is input through the keyboard. Write a program to find out whether it is an even or odd number.
/* int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    printf("EVEN number");
    else 
    printf("ODD number");
    return 0;
} */

/* int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n&1)
    printf("Odd");
    else
    printf("Even");

    return 0;
} */

//Program 3
//Any year is enter through keyboard. Write a program to determine whether the year is leap or not.
/* int main()
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
} */