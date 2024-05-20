#include<stdio.h>
long long int fact(int);
int combination(int, int);
int permutation(int n, int r);
int check_digit(int n, int digit);
void all_prime_factor(int n);
//Program 1

/*int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d ",fact(n));
    return 0;
}*/

long long int fact(int n)
{
    int i;
    long long int fact=1;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    return fact;
}


//Program 2

/*int main()
{
    int n,r;
    printf("Enter the total item(n):");
    scanf("%d",&n);
    printf("Enter the items to be selected(r):");
    scanf("%d",&r);
    printf("Number of combinations: %d",combination(n,r));
    return 0;
}*/

int combination(int n, int r)
{   int comb;
    comb=fact(n)/(fact(n-r)*fact(r));
    return comb;
}



//Program 3 
/*int main()
{
    int n,r;
    printf("Enter the total item(n):");
    scanf("%d",&n);
    printf("Enter the items to be selected(r):");
    scanf("%d",&r);
    printf("Number of arrangement: %d",permutation(n,r));
    return 0;
}*/

int permutation(int n, int r)
{
    int perm;
    perm=fact(n)/fact(n-r);
    return perm;
}


//Program 4

/*int main()
{
    int  n,digit,check;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a digit to check:");
    scanf("%d",&digit);
    check=check_digit(n,digit);
    if(check==1)
    printf("Number contains given digit");
    else 
    printf("Not contain");
    return 0;
}*/


int check_digit(int n, int digit)
{
    int a;
    while(n>0)
    {
        a=n%10;
            if(a==digit)
               {
                  return 1;
               }
        n=n/10;
    }
    if(n==0)
     return 0;  
}



//Program 5

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    all_prime_factor(n);
    return 0;
}

void all_prime_factor(int n)
{
    int i=2;
    while(n>1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        else
        {
            i++;
        }
    }
}



// void all_prime_factor(int n)
// {
//     int i=2;
//     while(n>1)
//     {
//         while(n%i==0)
//         {
//             printf("%d ",i);
//             n=n/i;
//         }
//         i++;
//     }
// }