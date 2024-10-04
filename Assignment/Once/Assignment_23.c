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
    if(n<2)
    return 0;
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
    while(!check_prime(++n));
    return n;
}


//Program 5
void first_N_Prime(int n)
{
    int count=0,x=2;
    while(count<n)
    {
        if(check_prime(x))
        {
            printf("%d ",x);
            count=count+1;
        }
        x++;
    }
}





int main()
{
    int n;
    printf("Enter a number to print N term of Fibonacci series:");
    // printf("Enter a number to print first n Prime:");
    scanf("%d",&n);
    // int a,b;
    // printf("Enter two number:");
    // scanf("%d %d",&a,&b);
    // // printf("LCM is %d",LCM(a,b));
    // printf("HCF is %d",HCF(a,b));
    // if(check_prime(n))
    // printf("Prime");
    // else 
    // printf("Not Prime");
    // printf("Next Prime %d",next_prime(n));
    // first_N_Prime(n);
    // all_Prime_bw_2(a,b);
    first_N_fibo(n);

    return 0;
}