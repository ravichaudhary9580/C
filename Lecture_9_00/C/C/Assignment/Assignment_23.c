#include<stdio.h>
int LCM(int a, int b);
int HCF(int a,int b);
int check_prime(int n);
int next_prime(int n);

//Program 1

int LCM(int a, int b)
{
    int L;
    L=a>b?a:b;
    while(L<=a*b)
    {
        if(L%a==0&&L%b==0)
        return L;
        L++;
    }
}

//Program 2
int HCF(int a,int b)
{
    int H;
    H=a>b?a:b;
    while(H)
    {
        if(a%H==0&&b%H==0)
        return H;
        H--;
    }
}

//Program 3
int check_prime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        return 0;
        i++;
    }
    return 1;
}

//Program 4

int next_prime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        n=n+1;
        i++;
    }
    return 1;

}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // int a,b;
    // printf("Enter two number:");
    // scanf("%d %d",&a,&b);
    // printf("LCM is %d",LCM(a,b));
    // printf("HCF is %d",HCF(a,b));
    if(check_prime(n))
    printf("Prime");
    else 
    printf("Not Prime");
    
    return 0;
}