#include<stdio.h>
#include<math.h>

/* (a) x = (y+3);
(b) cir = 2*3.141593*r;
(c) char = '3';//char ch = '3';
(d) (4/3)*3.14*r*r*r = vol_of_sphere;//Only one variable can exist on LHS
(e) volume = a³; //no exponent operateor exist in C
(f) area = (1/2) * base * height;
(g) si = (p*r*n)/100;
(h) area of circle = 3.14*r*r;//space can not exist b/w variable name
(i) peri_of_tri = a+b+c;
(j) slope = (y2-y1)÷(x2-x1);//symbole of division operator is / in C
(k) 3 = b = 4 = a;//NO constant in LHS of (=) assignment operator
(l) count = count + 1;
(m) char ch = '25 Apr 12';// char can store single character not a string
 */


/* (a) a=3, b=2, x=5, y=4; assume ans to be an int 
    ans = 5*b*b*x-3*a*y*y-8*b*b*x+10*a*y;
    ans = 100-144-160+120;
    ans = 100-144-40;
    ans = -84;

(b) a=4, y=1, c=3; assume res to be an int
    res = 4*a*y/c-a*y/c;
    res = 16/3-4/3;
    res = 5-1;
    res = 4;

(c) a = 2.2, b = 0.0, c = 4.1, y = 3.0; assume s to be a float
    s = c+a*y*y/b;
    s = 4.1+2.2*3.0*3.0/0.0;
    s = 4.1+∞;

(d) x=3.5; assume R to be a float
    R = x*x+2*x+1/2*x*x+x+1;
    R = 3.5*3.5 + 2*3.5 + 1/2*3.5*3.5 + 3.5 + 1;
    R = 12.25 + 7.0 + 0 + 3.5 + 1; 
    R = 23.75; */



/* (a) g = 10/5/2/1;
    g = 1;

(b) b = 3/2 + 5*4/3;
    b = 1 + 6;
    b = 7;

(c) a = b = c = 3+4;
    a = b = c = 7;

(d) x = 2 - 3 + 5*2/8%3;
    x = 0;

(e) z = 5%3/8*3+4
    z = 4

(f) y = z = -3%-8/2 + 7;
    y = z = -3/2 + 7;
    y = z = -1 + 7;
    y = z = 6;
 */


int main()
/* {
    int i=2, j=3, k, l;
    float a,b;
    k = i/j*j;// 2/3*3==0
    l = j/i*i;// 3/2*2==2
    a = i/j*j;// 2/3*3==0.000000
    b = j/i*i;// 3/2*2==2.000000
    printf("%d %d %f %f",k,l,a,b);
    return 0;
} */

/* {
    int a,b,c,d;
    a=2%5;//2
    b=-2%5;//-2
    c=2%-5;//2
    d=-2%-5;//-2
    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
    return 0;
} */

/* {
    int a,b,c,d;
    a=2/1;//2
    b=-2/1;//-2
    c=2/-1;//-2
    d=-2/-1;//2
    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
    return 0;
} */

/* {
    float a=5, b=2;
    int c,d;
    // c = a%b;//error
    d = a/2;//2
    printf("%d \n",d);
    return 0;
} */

/* {
    printf("nn \n\n nn\n");
    printf("nn /n/n nn/n");
    return 0;
} */

/* {
    int a, b;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a,&b);
    printf("a = %d b = %d ",a,b);
    return 0;
} */



/* (a) * or /, + or - represents the correct hierarchy of arithmetic operator in C.  'F'// % operator need to add
(b) [] and {} can be used in Arithmetic instructions 'F'
(c) Hierarchy decides which operator is used first 'F'
(d) In C, Arithmetic instruction cannot contain constants on left side of =. 'T'
(e) In C ** operator is used for exponentiation operation. 'F'
(f) % operator cannot be used with float 'T'
 */

/* (a) In y = 10*x/2 + z;' * 'operation will be performed first.
(b) If a is an integer variable, a=11/2 would store ' 5 ' in a.
(c) The expression, a = 22/7*5/3 would evaluate to ' 5 '
(d) The expression x = -7%2-8 would evaluate to ' -9 '
(e) If d is a float the operation d = 2/7.0 would store ' 0.285714' in d. */