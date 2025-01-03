#include<stdio.h>
//Program 1
// A year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||.
/* int main()
{
    int yr;
    printf("Enter the Year:");
    scanf("%d",&yr);
    if((yr%4!=0)||(yr%100==0&&yr%400!=0)) 
        printf("Not a Leap Year");
    else
        printf("Leap Year");
    return 0;
} */

//Program 2
//If a character is entered through the keyboard, write a program to determine whether the character is a capital letter, a small case letter, a digit or a special symbol.
//The following table shows the range of ASCII values for various characters:
// Characters             ASCII Values
//    A-Z                   65-90
//    a-z                   97-122
//    0-9                   48-57
// special symbols      0-47, 58-64, 91-96, 123-127
/* int main()
{
    char ch;
    printf("Enter a charcter:\033[1;34m");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("Uppercase Alphabet");
    
    else if(ch>=97&&ch<=122)
        printf("Lowercase Alphabet");
    
    else if(ch>=48&&ch<=57)
        printf("Digit");
    
    else
        printf("Special Symbol");
    printf("\033[0m");
    return 0;
} */

// Program 3
//If the length of the 3 sides of a triangle are entered through the  keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.
/* int main()
{
    int a,b,c,max;
    printf("Enter the 3 sides of Triangel:");
    scanf("%d %d %d",&a,&b,&c);
    max = a;
    if(b>a)
        max=b;
    if(c>a)
        max=c;

    if(a+b>max&&b+c>max&&c+a>max)
        printf("\033[32mTriangle is valid\033[0m");
    else
        printf("\033[31mTriangle is Invalid\033[0m");
    return 0;
} */