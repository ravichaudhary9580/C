//Given a point (x,y), write a program to find out if it lies on the x-axis, y-axis or on the origin.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate of Point(x,y): ");
    scanf("%d %d",&x,&y);
    if(x==0&&y==0)
    printf("Point is on Origin.");
    if(x==0&&y!=0)
    printf("Point is on Y-axis.");
    if(y==0&&x!=0)
    printf("Point is on X-axis.");
    if(x>0&&y>0)
    printf("I-quadrant");
    if(x<0&&y>0)
    printf("II-quadrant");
    if(x<0&&y<0)
    printf("III-quadrant");
    if(x>0&&y<0)
    printf("IV-quadrant");
    return 0;
}