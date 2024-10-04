#include<stdio.h>

void printN_odd(int n);
void reverse_N_Odd(int n);
void printN_Even(int n);



//Program 1

// int first_N_natural(int a,int n)
// { 
//    if(a<=n)
//    {
//    printf("%d ",a);
//    a++;
//    first_N_natural(a,n);
//    }
//   return 0; 
// }

//Program 1.1

// void printN(int n)
// {
//    if (n>0)
//    {
//       printN(n-1);
//       printf("%d ",n);
//    }
// }

//Program 2

// void reverse_N(int n)
// {
//     if(n>0)
//     {
//     printf("%d ",n);
//     reverse_N(n-1);
//     }
// }

// Program 2.1

// int reverse_N(int a,int n)
// { 
//    if(a<n)
//    {
//    a++;
//    reverse_N(a,n);
//    printf("%d ",a);
//    }
//   return 0; 
// }

//Program 3

// void printN_odd(int n)
// {
//    if (n>0)
//    {
//       printN_odd(n-1);
//       printf("%d ",2*n-1);
//    }
// }


//Program 4

// void reverse_N_Odd(int n)
// {
//     if (n>0)
//    {
//       printf("%d ",2*n-1);
//       reverse_N_Odd(n-1);
//    }
// }

//Program 

void printN_Even(int n)
{
    if (n>0)
   {
      printN_Even(n-1);
      printf("%d ",2*n);
   }
}


int main()
{ 
    int n,a=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printN_Even(n);
   return 0;
}