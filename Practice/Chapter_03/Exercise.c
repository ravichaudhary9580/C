#include<stdio.h>
#include <stdlib.h>
#include<math.h>
//Program 1
//A five digit number is enterd through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed number are equal or not.
/* int main()
{
    int n,rev,temp;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);//12345
    temp = n;//12345
    rev = n%10;//5
    n = n/10;//1234
    rev = rev*10 + n%10;//54
    n = n/10;//123
    rev = rev*10 + n%10;//543
    n = n/10;//12
    rev = rev*10 + n%10;//5432
    n = n/10;//1
    rev = rev*10 + n%10;//54321
    n = temp;
    printf("Reverse number is:%d",rev);

    if(rev==n)
        printf("\nReversed number and number are equal.");
    else
        printf("\nReversed number and number are not equal.");
    return 0;
} */


//Program 2
//If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
/* int main()
{
    int ram, shyam, ajay, youngest;
    printf("Enter the ages of Ram, Shyam and Ajay:");
    scanf("%d %d %d",&ram,&shyam,&ajay);
    if(ram<shyam && ram<ajay)
        printf("Ram is youngest.");
    else if(shyam<ram && shyam<ajay)
        printf("Shyam is youngest.");
    else
        printf("Ajay is youngest.");
    return 0;
} */

//Program 3
//Write a program to check whether a triangle is valid or not, if three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the angles is equal to 180ᴼ.
/* int main()
{
    int a,b,c;
    printf("Enter the angles of triangle:");
    scanf("%d %d %d");
    if(a+b+c==180)
        printf("Triangle is valid.");
    else
        printf("Triangle is Invalid.");
    return 0;
} */

//Program 4
//Write a program to find the absolute value of a number entered through the keyboard.
/* int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The absolute value of %d is %d\n", num, abs(num));
    return 0;
} */

//Program 5
// Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with the length = 5 and breadth = 4 is greater than its perimeter.
/* int main()
{
    int l,b,area,peri;
    printf("Enter the Length and bradth:");
    scanf("%d %d",&l,&b);
    area = l*b;
    peri = 2*l+2*b;
    printf("Area of Rectangle: %d\nPerimeter of Rectangle: %d",area,peri);
    if(area>peri)
        printf("\nArea is greater than Perimeter.");
    else
        printf("\nPerimeter is greater than Area.");
    return 0;
} */


//Program 6
//Given three points (x1,y1), (x2,y2) and (x3,y3), write a program to check if 3 points fall on one straight line.
/* int main()
{
    int x1,x2,x3,y1,y2,y3,area;
    printf("Enter the co-ordinate of point A(x1,y1): \n");
    scanf("%d %d",x1,y1);
    printf("Enter the co-ordinate of point B(x2,y2): \n");
    scanf("%d %d",x2,y2);
    printf("Enter the co-ordinate of point C(x3,y3): \n");
    scanf("%d %d",x3,y3);

    area = (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;

    if(area==0)
        printf("Points are collinear.");
    else
        printf("Non-collinear.");
    return 0;
} */


//Program 7
//Given the coordinates (x,y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle on the circle or outside the circle.(Hint:Use sqrt() and pow() functions)
/* int main()
{
    int cx,cy,r,px,py;
    float D;
    printf("Enter the co-ordinate of center of Circle (x,y): ");
    scanf("%d %d",&cx,&cy);
    printf("Enter the radius of Circle: ");
    scanf("%d %d",&r);
    printf("Enter the co-ordinate of Point (x,y): ");
    scanf("%d %d",&px,&py);
    D = sqrt(pow((px-cx),2) + pow((py-cy),2));
    if(D>r)
        printf("Point is \033[32moutside \033[0mthe circle");
    else if(D<r)
        printf("Point is \033[32minside \033[0mthe circle");
    else
        printf("Point is\033[33m on \033[0mthe circle");
    return 0;   
} */

//Program 8
//Given a point (x,y), write a program to find out if it lies on X-axis, Y-axis or origin.
