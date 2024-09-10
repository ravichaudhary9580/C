//Given the coordinates (x,y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle.
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,p,q,r;
    float Distance;
    printf("Enter the coordinate of center of circle:");
    scanf("%d %d",&x,&y);
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    printf("Enter the coordinate of point:");
    scanf("%d %d",&p,&q);
    Distance=sqrt((x-p)*(x-p)+(y-q)*(y-q));
    if(Distance>r)
    printf("Point is outside the circle");
    if(Distance==r)
    printf("Point is on the circle");
    if(Distance<r)
    printf("Point is inside the circle");
    return 0;
}