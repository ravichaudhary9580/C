#include<stdio.h>
//(a)
/* int main()
{
    int i=1;
    while(i<=10);
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
} */
//Output
//Nothing prints Just stops as the condition of while is always true

//(b)
/* int main()
{
    int x=4,y,z;
    y=--x;//y=3,x==3
    z=x--;//z=3,x==2
    printf("%d %d %d\n",x,y,z);//2,3,3
    return 0;
} */
//Output
//2,3,3

//(c)
/* int main()
{
    int x=4,y=3,z;
    z=x-- - y;//z=1,x=3,y=3
    printf("%d %d %d\n",x,y,z);//3,3,1
    return 0;
} */
//Output
//3,3,1


//(d)
/* int main()
{
    while('a'<'b')
        printf("malayalam is a palindrome\n");
    return 0;
} */
//Output
//Infinite loop

//(e)
/* int main()
{
    int i;
    while(i=10)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
} */
//Output
//Infinite loop

//(f)
/* int main()
{
    float x=1.1;
    while(x==1.1)
    {
        printf("%f\n",x);
        x=x-0.1;
    }
    return 0;
} */

/* #include <math.h>

int main() {
    float x = 1.1;
    float epsilon = 0.00001; // Small tolerance value

    while(fabs(x - 1.1) > epsilon) {
        printf("%f\n", x);
        x = x - 0.1;
    }

    return 0;
} */

//NO Output