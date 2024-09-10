//Write a program to receive a character from keyboard and then determine whether the character entered is an upper case alphabet, lower case alphabet, digit or special symbol.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>64&&ch<91)
    printf("Upper case Alphabet");
    else if(ch>96&&ch<123)
    printf("Lower case Alphabet");
    else if(ch>47&&ch<58)
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}