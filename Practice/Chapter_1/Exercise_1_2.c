#include<stdio.h>

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