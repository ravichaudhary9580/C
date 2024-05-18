#include<stdio.h>

int f1()
{
     int i,j;
     for(i=1;i<=4;i++)
     {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}


int f2()
{
     int i,j;
     for(i=1;i<=4;i++)
     {
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}

int f3()
{
     int i,j,flag;
     for(i=1;i<=4;i++)
     {
        for(j=1,flag=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(flag)    
                printf("*");
                else
                printf(" ");
            flag=1-flag;
            }
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}


int f4()
{
     int i,j,k;
     for(i=1;i<=6;i++)
     {
        for(j=1,k=1;j<=11;j++)
        {
            if(j>=7-i&&j<=5+i)
            {
                if(j<=6)
                {
                printf("%d",k);
                k++;
                }
                else
                {
                    printf("%d",k-2);
                    k--;
                }
            }
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}

int f5()
{
     int i,j;
     char k;
     for(i=1;i<=4;i++)
     {
        for(j=1,k='A';j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
            printf("%c",k);
            k++;
            }
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}


int f6()
{
     int i,j;
     char k;
     for(i=1;i<=4;i++)
     {
        for(j=1,k='A';j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
            printf("%c",k);
            j<4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}



int f7()
{
     int i,j,flag,k;
     for(i=1;i<=5;i++)
     {
        for(j=1,k=1,flag=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                if(flag)    
                {
                    printf("%d",k);
                    j<5?k++:k--;
                 }
                else
                {
                printf(" ");
                if(j==5)
                k--;
                }
            flag=1-flag;
            }
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}


int f8()
{
     int i,j;
     for(i=1;i<=4;i++)
     {
        for(j=1;j<=7;j++)
        {
            if(j>=3+i||j<=5-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
     }
    return 0;
}

int f9()
{
     int i,j,k;
     for(i=1;i<=4;i++)
     {
        for(j=1,k=1;j<=7;j++)
        {
            if(j>=3+i||j<=5-i)
            {
            printf("%d",k);
            j<4?k++:k--;
            }
            else
            {
            printf(" ");
            if(j==4)
            k--;
            }
        }
        printf("\n");
     }
    return 0;
}

int f10()
{
     int i,j;
     char k;
     for(i=1;i<=4;i++)
     {
        for(j=1,k='A';j<=7;j++)
        {
            if(j>=3+i||j<=5-i)
            {
            printf("%c",k);
            j<4?k++:k--;
            }
            else
            {
            printf(" ");
            if(j==4)
            k--;
            }
        }
        printf("\n");
     }
    return 0;
}


int main()
{
    f10();
    return 0;
}