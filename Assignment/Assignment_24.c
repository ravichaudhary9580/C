#include<stdio.h>
// //Program 1

// void all_Prime_bw_2(int a, int b)
// {
//     for(a;a<b;a++)
//     {
//         if(check_prime(a))
//         {
//             printf("%d ",a);
//         }
//     }
// }


// //Program 1.1

// void count_prime(int a, int b)
// {
//     int count=0;
//     for(a;a<b;a++)
//     {
//         if(check_prime(a))
//         {
//             count=count+1;
//         }
//     }
//      printf("%d ",count);
// }

//Program 2

void first_N_fibo(int n)
{
    int a=0,b=1,c,i=0;
    while(i<n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        i++;
    }
}


int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    first_N_fibo(n);
    return 0;
}