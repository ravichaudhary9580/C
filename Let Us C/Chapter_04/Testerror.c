//[A]
//If a=10, b=12, c=0, find the values of the expression in the following table:
//    Expression                         Value
/* (a) a != 6 && b>5                  
    10!=6 && 12>5
      1 && 1
         1                                  1

(b) a == 9 || b<3
    10==9 || 12<3
    0 || 0
       0                                    0

(c) !(a<10)
    !(10<10)
    !(0)
     1                                      1

(d) !(a>5 && c)
    !(10>5 && 0)
    !(1 && 0)
       1                                    1

(e) 5 && c!=8 || !c
    5 && 0!=8 || !0
    5 && 1 || 1
    1 || 1
       1                                    1
 */

#include<stdio.h>
// (a)
/* int main()
{
    int i=4, z=12;
    if(i=5 || z>50)
        printf("Dean of students affairs\n");
    else
        printf("Dosa\n");
    return 0;
}
//Output
//Dean of students affairs */

// (b)
/* int main()
{
    int i=4, j=-1, k=0, w, x, y, z;
    w = i || j || k;//1
    x = i && j && k;//0
    y = i || j && k;//1
    z = i && j || k;//1
    printf("w=%d x=%d y=%d z=%d",w,x,y,z);
    return 0;
} */

// (c)
/* int main()
{
    int x=20, y=40, z=45;
    if(x>y&&x>z)
        printf("biggest = %d\n",x);
    else if(y>x&&y>z)
        printf("biggest = %d\n",y);
    else if(z>x&&z>y)
        printf("biggest = %d\n",z);
    return 0;
}
//Output
//biggest = 45
 */

//(d)
/* int main()
{
    int i = -4, j, num;
    // printf("%d\n",num);
    j = (num<0 ? 0 : num*num);
    printf("%d\n",j);
    return 0;
}
//Output
//0 */

//(e)
/* int main()
{
    int k, num = 30;
    k = (num>5 ? (num<=10 ? 100 : 200) : 500);
    printf("%d",num);
    return 0;
}
//Output
//30 */



// (a)
/* int main()
{
    char spy = 'a', password = 'z';
    if( spy == 'a' or password == 'z')// or is not a operator instead ||  
        printf("All the birds are safe in the nest.\n");    
    return 0;
} */

//(b)
/* int main()
{
    int i=10, j=20;
    if(i=5) && if(j=10)//if(i==5 && j==10)
        printf("Have a nice day.\n");
    return 0;
} */

//(c)
/* int main()
{
    int x = 10, y = 20;
    if(x>=2 and y<=50)//if(x>2 && y<=50)
        printf("%d\n",x);
    return 0;
} */

//(d)
/* int main()
{
    int x=2;
    if(x==2 && x!=0);//no need of semi-colon here
        printf("Hello\n");
    else
        printf("Bye\n");
    return 0;
} */

//(e)
/* int main()
{
    int j=65;
    printf("j>=65 ? %d : %c\n",j);//j,j
    return 0;
} */

//(f)
/* int main()
{
    int i=10, j;
    i<=5 ? j=10 : j=15;//j = i<=5 ? 10 : 15;
    printf("%d %d\n",i,j);
    return 0;
} */

//(g)
/* int main()
{
    int a=5, b=6;
    (a==b ? printf("%d\n",a));
    // a==b ? printf("%d\n",a) : printf("%d\n",b);
    return 0;
} */

//(h)
/* int main()
{
    int n=9;
    (n==9 ? printf("Correct") : printf("Wrong"));
    return 0;
} */