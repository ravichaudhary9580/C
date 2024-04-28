#include<stdio.h>
float area_of_circle(int);
float simple_interest(int,float,int);
int check(int);
void first_N_natural(int);
void first_N_odd(int);
//Program 1

/*int main()
{
    int r;
    printf("Enter the radius:");
    scanf("%d",&r);
    printf("Area of circle: %f",area_of_circle(r));
    return 0;
}

float area_of_circle(int a)
{
    float area;
    area=3.14*a*a;
    return area;
}*/

//Program 2

/*int main()
{
    int p,t;
    float r;
    printf("Enter Principle Rate and Time:");
    scanf("%d %f %d",&p,&r,&t);
    printf("Simple Interest is: %f",simple_interest(p,r,t));
    return 0;
}

float simple_interest(int p, int r, int t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}*/


//Program 3

/*int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    i=check(n);
    if(i==1)
    printf("Even");
    else
    printf("Odd");
    return 0;
}

int check(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}*/


//Program 4
/*int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    first_N_natural(n);
    return 0;
}

void first_N_natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",i);
}*/


//Program 5

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    first_N_odd(n);
    return 0;
}

void first_N_odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d ",2*i-1);
}