#include<stdio.h>
#include<math.h>
// Write a program to receive Cartesian coordinates (x,y) of a point and convert them into polar coordinates(r,φ).
// r=√x²+y²
// φ=tan⁻¹(y/x)
int main()
{
    float x,y,r,phi;
    printf("Enter the coordinates (x,y): ");
    scanf("%f %f",&x,&y);

    r=sqrt(x*x+y*y);
    phi = atan2(y,x);

    phi = phi*180/3.14;//converting to degree

    printf("Polar Coordinate is (r,φ): (%f,%f)",r,phi);
    return 0;
}
