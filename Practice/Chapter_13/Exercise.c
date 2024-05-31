#include<stdio.h>

//Program 1 
int min()
{
    int arr[25],i;
    int posi=0,nege=0,even=0,odd=0,zero=0;
    printf("Enter 25 number:");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if(arr[i]>0)
        {
            posi=posi+1;
            if(arr[i]%2==0)
            even=even+1;
            else
            odd=odd+1;
        }
        else if(arr[i]<0)
        {
            nege=nege+1;
        }
        else
        zero=zero+1;
    }
    printf("No of posi %d\n",posi);
    printf("No of negative %d\n",nege);
    printf("No of zero %d\n",zero);
    printf("No of even %d\n",even);
    printf("No of odd %d\n",odd);
    return 0;
}

//Progarm 2
int mn()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n/2;)
    {
        if(arr[i]==arr[n-1-i])
        i++;
        else 
        break;
    }
    if(i==(n/2))
   printf("Equal");// return 1;//Equal
    else
   printf("Not Equal");//return 0;//Not Equal

   return 0;
}

//Program 3

int smallest(int *p,int size)
{
    int i,min;
    min=*p;
    for(i=0;i<size;i++)
    {
        if(*(p+i)< min)
        min=*(p+i);
    }
    return min;
}
int n()
{
    int arr[]={2,4,5,1,7,0,4,87,45,1};
    printf("%d",smallest(&arr[0],10));
    return 0;
}

//Program 5
void modify(int *p,int *new)
{
    int i;
    for(i=0;i<10;i++)
    {
       *new=*p*3;
        new++;
        p++;
    }
}
int main()
{
    int i;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int new[10],*ptr;
    ptr=&new[0];
    modify(&arr[0],&new[0]);
    for(i=0;i<10;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}