#include<stdio.h>
// C=(F-32)*5/9
// C=Celsius, F=Fahrenheit
int main()
{
    float F,C;
    printf("Enter the temperature in (%cF)Fahrenheit:  ",248);
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\nTemperature in (%cC)Celsius is:  %f %cC",248,C,248);
    return 0;
}

int main()
{
    float l,b,peri,area_rec,r,cir,area_cir;
    //l=length, b=breadth, peri=perimeter, area_rec=area of rectangle, r=radius, cir=circumference, area_cir=area of circle
    printf("Enter the Length of Rectangle:");
    scanf("%f",&l);
    printf("Enter the Breadth of Rectangle:");
    scanf("%f",&b);
    printf("Enter the Radius of Circle:");
    scanf("%f",&r);
    peri=2*(l+b);
    area_rec=l*b;
    cir=2*3.14*r;
    area_cir=3.14*r*r;
    printf("\nPerimeter of Rectangle:%f",peri);
    printf("\nArea of Rectangle:%f",area_rec);
    printf("\n\nCircumference of Circle:%f",cir);
    printf("\nArea of Circle:%f",area_cir);
    return 0;

}

int main()
{
    int a,b;
    printf("Enter the size of A0 Paper:");
    scanf("%d %d",&a,&b);
    printf("\nThe size of A0 Paper:%d X %d",a,b);
    printf("\nThe size of A1 Paper:%d X %d",b,a/2);
    printf("\nThe size of A2 Paper:%d X %d",a/2,b/2);
    printf("\nThe size of A3 Paper:%d X %d",b/2,a/4);
    printf("\nThe size of A4 Paper:%d X %d",a/4,b/4);
    printf("\nThe size of A5 Paper:%d X %d",b/4,a/8);
    printf("\nThe size of A7 Paper:%d X %d",a/8,b/8);
    printf("\nThe size of A6 Paper:%d X %d",b/8,a/16);
    printf("\nThe size of A8 Paper:%d X %d",a/16,b/16);
    return 0;
}