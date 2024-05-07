#include<stdio.h>

// Program 1
/*int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if(n<0)
    printf("Negtive Number");
    else if(n==0)
    printf("Zero Number");
    else
    printf("Positive Number");
    return 0;
}*/


// Program 2
/* int main()
{
    char n;
    printf("Enter an Alphabet:");
    scanf("%c",&n);
    if (n<91&&n>64)
    printf("Uppercase");
    else if (n<123&&n>96)
    printf("Lowercase");
    else if (n<58&&n>47)
    printf("Digit");
    else//if (n<256&&n>122&&n<97&&n>90&&n<65&&n>57&&n<48&&n>0)
    printf("Special Character");
    return 0;
} */



//Program 3

/*int main()
{
    int a,b,c;
    printf("Enter the sides of Triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if (a<1||b<1||c<1)
    printf("Invalid Triangle");
    else
    printf("Valid Triangle");
    return 0;
}*/


//Program 4

/*int main()
{
    int n;
    printf("Enter the month number:");
    scanf("%d",&n);
    if(n<13&&n>0) 
    {
        if (n==2)
            printf("28 days");
        else if (n==4||n==6||n==9||n==11)
            printf("30 days");
        else
            printf("31 days");
    }
    else
    printf("Invalid Month");
    return 0;
}*/