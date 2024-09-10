//Write a progarm to receive values of a,b,c from a quadratic equation ax²+bc+c and determine its root.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,r1,r2;
    printf("Enter the coefficients a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    D=(b*b)-(4.0*a*c);
    if(D>0.0)
    printf("Roots are REAL and DISTINCT");
    
    if(D==0.0)
    printf("Roots are REAL and EQUAL");
    
    if(D<0.0)
    printf("Imaginery");
       
    r1=(-b+sqrt(D))/2.0*a;
    r2=(-b-sqrt(D))/2.0*a;
    printf("\nRoots are %f, %f",r1,r2); 
    return 0;
}