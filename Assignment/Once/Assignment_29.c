#include<stdio.h>
int check(int n);

//Program 1

// int main()
// {
//     int a[10],i,sum=0;
//     printf("Enter 10 numbers:");
//     for(i=0;i<=9;i++)
//     {
//     scanf("%d",&a[i]);
//     sum=sum+a[i];
//     }
//     printf("%d",sum);
//     return 0;
// }

//Program 2

// int main()
// {
//     int a[10]={10,20,30,40,50,60,70,80,90,100},i;
//     float Avg=0;
//     for(i=0;i<=9;i++)
//     {
//       Avg=Avg+a[i];
//     }
//     printf("Average is : %d",Avg/10);
//     return 0;
// }


int check(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}

//Program 3

// int main()
// {
//     int a[10],i,sumeven=0,sumodd=0;
//     printf("Enter 10 numbers:");
//     for(i=0;i<=9;i++)
//     {
//     scanf("%d",&a[i]);
//     }
//     for(i=0;i<=9;i++)
//     {
//         if(check(a[i]))
//         sumeven=sumeven+a[i];
//         else
//         sumodd=sumodd+a[i];
//     }
//     printf("\nSum of Even is: %d",sumeven);
//     printf("\nSum of Odd is:%d",sumodd);
//     return 0;
// }


//Program 4

// int main()
// {
//     int a[10],i,max;
//     printf("Enter 10 numbers:");
//     for(i=0;i<=9;i++)
//     {
//     scanf("%d",&a[i]);
//     }   
//     max=a[0];
//     for(i=1;i<=9;i++)
//     {
//         if(max<a[i])
//            max=a[i];
//     }
//     printf("Greatest is:%d",a[x]);
// }



//Program 5

int main()
{
    int a[10],i,min;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    }   
    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(min>a[i])
           min=a[i];
    }
    printf("Smallest is:%d",a[x]);
}
