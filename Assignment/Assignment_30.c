#include<stdio.h>

//Program 1
// int main()
// {
//     int a[10],i,j,temp=0;
//     printf("Enter 10 numbers:");
//     for(i=0;i<=9;i++)
//     {
//     scanf("%d",&a[i]);
//     }   
//     for(j=0;j<=9;j++)
//     {
//         for(i=0;i<=9-j;i++)
//         {
//             if(a[i]>a[i+1])
//             {
//                 temp=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=temp;
//             }
//         }
//     }
//     for(i=0;i<=9;i++)
//     {
//     printf("%d ",a[i]);
//     }
//     return 0;
// }


//Program 2
//Program 3

// Program 4
int main()
{
    int a[10],i,j,temp=0;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);
    }   
    for(j=0;j<=9;j++)
    {
        for(i=0;i<=9-j;i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<=9;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}


//Program 5

// int main()
// {
//     int a[10],b[10];
//     int i;
//     printf("Enter 10 numbers:");
//     for(i=0;i<=9;i++)
//     {
//     scanf("%d",&a[i]);
//     }   
//     for(i=0;i<=9;i++)
//     {
//         b[i]=a[i];
//     } 

//     for(i=0;i<=9;i++)
//     printf("%d ",b[i]);
//     return 0;
// }