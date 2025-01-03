#include<stdio.h>
/* //(a) 
int main()
{
    int a = 300, b, c;
    if(a>=400)
        b=300;
    c = 200;
    printf("%d %d\n",b,c);//Garbage value, 200
    return 0;
} */

/* //(b)
int main()
{
    int x=10, y=20;
    if(x==y);
        printf("%d %d\n",x,y);//10,20
    return 0;
} */

/* //(c)
int main()
{
    int x=3;
    float y=3.0;
    if(x==y)
        printf("x and y are equal\n");
    else
        printf("x and y are not equal\n");
    return 0;
} */

/* //(d)
int main()
{
    int x=3, y, z;
    y=x=10;
    z=x<10;
    printf("x=%d y=%d z=%d\n",x,y,z);//10 10 0
    return 0;
} */

/* //(e)
int main()
{
    int i =65;
    char j='A';
    if(i==j)
        printf("\033[1;32mC is WOW\033[0m\n");
    else
    printf("C is a headache\n");
    return 0;
} */


/* 
// (a)
int main()
{
    float a=12.25, b=12.52;
    if(a=b)//(a==b)
        printf("a and b are equal\n");
    return 0;
} */

/* //(b)
int main()
{
    int j=10, k=12;
    if(k>=j)
    {
        {
            k=j;
            j=k;
        }
    }
    return 0;
} */

/* //(c)
int main()
{
    if('X'<'x')
        printf("ascii value of X is smaller than that of x\n");
    return 0;
} */

/* //(d)
int main()
{
    int x=10;
    if(x>=2)then//No need of then there is no keyword or syntax like this
        printf("%d\n",x);
    return 0;
} */

/* //(e)
int main()
{
    int x=10,y=15;
    if(x%2=y%3)//no constant can be on LHS of =
        printf("Carpathians");
} */

/* //(f)
int main()
{
    int a,b;
    scanf("%d %d",a,b);
    if(a>b);//Typeing error no need of semi-colon
        printf("This is a game\n");
    else
        printf("You have to Play it\n");
        return 0;
} */



/* (a) ; is a valid statement 'T' //Null statement
(b) Ifs can be nested 'T'
(c) If there are multiple statements in if or elseblock, they should be enclosed within a pair of {}. 'T'
(d) If can occur within an if block but not in the else block. 'F'
(e) By default there is only one statement in if block and only one in the else block. 'T'
(f) Nothing happens on execution of a null statement. 'T'
 */


/* (a) Multiple statements ----- (5) {}
(b) else block ----- (4) optional
(c) ; ----- (7) Null Statement
(d) < > <= >= == != ----- (3) Relational operator
(e) == ----- (2) Comparision operator
(f) + - * / % ----- (6) Arithmetic operator
(g) = ----- (1) Assignment operator 
(h) Default control instruction ----- (9) Sequence
(i) Decision control instruction ----- (8) if-else
 */


/* 
(a) if(-25) 'T'
(b) if(3.14) 'T'
(c) if(a) 'T'
(d) if(a+b) 'T'
(e) if(a>=b) 'T'
*/