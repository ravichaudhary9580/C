#include<stdio.h>
#include<math.h>

void shift_right(int*,int*,int*);
void conversion(int *kg, int *grams, float *tons, float *pounds);

//Progarm 1 
/* int main()
{
    int a=5,b=8,c=10;
    printf("%d %d %d\n",a,b,c);
    shift_right(&a,&b,&c);
    printf("%d %d %d",a,b,c);
    return 0;
}

void shift_right(int *x,int *y,int *z)
{
     int temp;
     temp=*x;
     *x=*z;
     *z=*y;
     *y=temp;
} */

//Program 2
/* int main()
{
    int kg=5,grams;
    float tons,pounds;
    conversion(&kg,&grams,&tons,&pounds);
    printf(" %d kg\n %d grams\n %f tons\n %f pounds\n",kg,grams,tons,pounds);
    return 0;
}

void conversion(int *kg, int *grams, float *tons, float *pounds)
{
    *grams=1000**kg; 
    *tons=*kg/1000.0;
    *pounds=*kg*2.20462262;
} */

//Program 3
/* float distance_formula(int *x1,int *y1,int *x2,int *y2)
{
    float distance;
    distance=sqrt(pow(*x2-*x1,2)+pow(*y2-*y1,2));
    return distance;
}
 */
float area(int **d1,int **e1,int **d2,int **e2,int **d3,int **e3)
{
    
    return fabs((**d1*(**e2-**e3)+**d2*(**e3-**e1)+**d3*(**e1-**e2))/2.0);
    
}

int isInside(int *a1,int *b1,int *a2,int *b2,int *a3,int *b3,int *a,int *b)
{
    float A  = area(&a1, &b1, &a2, &b2, &a3, &b3);
    float A1 = area(&a,  &b,  &a2, &b2, &a3, &b3);
    float A2 = area(&a1, &b1, &a,  &b,  &a3, &b3);
    float A3 = area(&a1, &b1, &a2, &b2, &a,  &b);

    return (A == A1 + A2 + A3);
}
int main()
{
    int x1=0,y1=0,x2=4,y2=0,x3=4,y3=3;
    int x=45,y=45;
    if(isInside(&x1,&y1,&x2,&y2,&x3,&y3,&x,&y))
    printf("Inside");
    else
    printf("Outside");

   /*  printf("%f",area(&x1,&y1,&x2,&y2,&x3,&y3)); */
    return 0;
}