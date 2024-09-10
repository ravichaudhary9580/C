//Given three points (x1,y1),(x2,y2),(x3,y3),write a program to check if all the three points fall on one straight line.
//Area of ∆ABC = ½ [ x1 (y2 – y3) + x2 (y3 – y1) + x3 (y1 – y2)]
#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,area;
    printf("Enter the coordinate of point P(x1,y1):");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinate of point Q(x2,y2):");
    scanf("%d %d",&x2,&y2);
    printf("Enter the coordinate of point R(x3,y3):");
    scanf("%d %d",&x3,&y3);
    area = (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))/2;
    if(area==0)
    printf("All points lies in straight line");
    else
    printf("Not lies in straight line");
    return 0;
}