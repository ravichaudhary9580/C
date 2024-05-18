#include<stdio.h>


int f1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            // else
            // printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int f2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
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
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            printf("*");
            // else
            // printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int f4()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            printf("*");
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
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("%d ",j);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int f6()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1,k=i;j<=4;j++,k--)
        {
            if(j<=i)
            printf("%d ",k);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int f7()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        for(j=1,k='A';j<=5;j++)
        {
            if(j>=i)
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

int f8()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
            {
            printf("%d ",k);
            k++;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int f9()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        for(j=1,k='A';j<=5;j++,k++)
        {
            if(j>=i)
            printf("%c",k);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

int f10()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
  
    f10();
    printf("\n");
    
    return 0;
}