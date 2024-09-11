#include<stdio.h>
#include<math.h>//for sqrt()
//Problem 1
//If lengths of a trangle are input through the keyboard, write a program  to find the area of the trangle.
/* int main()
{
    int a,b,c;
    float sp,area;
    printf("Enter the three sides of Triangle:");
    scanf("%d %d %d",&a,&b,&c);
    sp=(a+b+c)/2.0;
    area=sqrt((sp*(sp-a)*(sp-b)*(sp-c)));
    printf("Area of Triangle:\033[7;32m%f\033[0m",area);
    return 0;
} */

//Problem 2
//If a 5-digit number is input through the keyboard, write a program to reverse the number.
/* int main()
{
    int n,rev;
    printf("Enter a 5 digit number:\033[1;32m");
    scanf("%d",&n);//let n=12345
    rev=n%10;//5
    n=n/10;//1234
    rev=(10*rev)+n%10;//54
    n=n/10;//123
    rev=(10*rev)+n%10;//543
    n=n/10;//12
    rev=(10*rev)+n%10;//5432
    n=n/10;//1
    rev=(10*rev)+n%10;//54321
    printf("\033[0mReverse number is:\033[1;34m%d\033[0m",rev);
    return 0;
} */

//Problem 3
//Consider a currency system in which there are notes of six denominations namely Re.1, Rs.2, Rs.5, Rs.10, Rs.50, Rs.100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.
/* int main()
{
    int amount,count;
    printf("Enter the amount N:");
    scanf("%d",&amount);
    count=amount/100;
    amount=amount%100;
    count=count+amount/50;
    amount=amount%50;
    count=count+amount/10;
    amount=amount%10;
    count=count+amount/5;
    amount=amount%5;
    count=count+amount/1;
    printf("%d",count);
    return 0;
} */


