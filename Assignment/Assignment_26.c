#include <stdio.h>

void reverse_N_Even(int n);
void printN_square(int n);
void binary(int n);
void octal(int n);
void reverse_num(int n);

// Program 1

// void reverse_N_Even(int n)
// {
//    if (n>0)
//    {
//       printf("%d ",2*n);
//       reverse_N_Even(n-1);
//    }
// }

// Program 2

// void printN_square(int n)
// {
//   if(n>0)
//   {
//     printN_square(n-1);
//     printf("%d ",n*n);
//   }
// }

//Program 3

// void binary(int n)
// {
//     if(n>0)
//     {
//     binary(n/2);
//     printf("%d",n%2);
//     }
// }


//Program 4

// void octal(int n)
// {
//     if(n>0)
//     {
//     octal(n/8);
//     printf("%d",n%8);
//     }
// }


//Program 5

void reverse_num(int n)
{
  int x=0;
 if(n>0)
  {
    printf("%d",(x*10+n%10));
    reverse_num(n/10);
   }
}

int main()
{
    int n,a;
    printf("Enter a number:");
    scanf("%d", &n);
    reverse_num(n);
    
    return 0;
}