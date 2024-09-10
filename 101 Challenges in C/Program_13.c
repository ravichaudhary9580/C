//If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equlateral,scalene or right angled triangle.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b<c)||(b+c<a)||(c+a<b)||a==0||b==0||c==0)
    printf("Not a Triangle");
    else{
        if(a==b&&b==c)
        printf("Equilateral Triangle");
        if(a!=b&&b!=c&&c!=a)
        printf("Scalene Triangle");
        if(a==b&&b!=c)
        printf("Isocsceles Triangle");
        if(b==c&&c!=a)
        printf("Isocsceles Triangle");
        if(c==a&&a!=b)
        printf("Isocsceles Triangle");
        if((c*c==a*a+b*b)||(a*a==b*b+c*c)||(b*b==a*a+c*c));
        printf("Right-Angled Triangle");
    }
    return 0;
}