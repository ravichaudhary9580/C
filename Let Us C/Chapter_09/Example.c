#include<stdio.h>
#include<math.h>
void stats(int *sum, float *avg);

//Program 1
/* int main()
{
    int sum;
    float avg;
    stats(&sum, &avg);
    printf("Sum is %d",sum);
    printf("Average is %f",avg);
    return 0;
}


void stats(int *sum, float *avg)
{
    int n1,n2,n3,n4,n5;
    printf("Enter five number:");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg= *sum/5.0;
} */

//Program 2

/* void power_factorial(float a, int b, int n, float *pow, int *fact)
{
     while(b)
    {
        *pow=*pow*a;
         b--;
    }
      
     while(n)
     {
         *fact=*fact*n;
         n--;
     }
}

int main()
{
    int b,n, fact=1;
    float a, pow=1;
   power_factorial(2.20,2,4,&pow,&fact);
   printf("Power= %f\nFactorial=%d",pow,fact);
   return 0;
} */


//Program 3
/* int main()
{
    float x=3.14;
    float *y;
    float **z;
    y=&x;
    z=&y;
    printf("%u %u %u\n",&x,&y,&z);
    printf("%p %p\n",y,z);
    printf("%f %f %f",x,*y,**z);
    return 0;
} */

