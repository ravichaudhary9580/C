#include <stdio.h>

int min()
{ 
    int arr[] = {10, 20, 30, 45, 67, 56, 74 };
    int i = 4 ,*j,*k,*x,*y;
    j = &i;
    // printf("%d\n",j);
    j = j + 9 ; /* pointer plus number */
    // printf("%d\n",j);
    k = &i;
    // printf("%d\n",k);
    k = k - 3; /* pointer minus number */
    // printf("%d\n",k);
    x = &arr[1];
    // printf("%d\n",x);
    y = &arr[5];
    // printf("%d\n",y);
    printf ("%d\n", y-x);
    j=&arr[4];
    printf("%d\n",j);
    k = (arr+4);
    printf("%d\n",k);
    if (j==k)
    printf ("The two pointers point to the same location\n");
    else
    printf ("The two pointers point to different locations\n"); 
    return 0;
}


#include <stdio.h>

int man()
{
    int num[ ] = { 24, 34, 12, 44, 56, 17 };
    int i, *ptr;
    ptr = &num[0]; /* assign address of zeroth element */
    for (i = 0; i <= 5; i++)
    {
    printf ("address = %u element = %d\n", ptr, *ptr);
    ptr++; /* increment pointer to point to next integer */
    }
    return 0;
}




void display1 (int *, int);
void display2 (int [],int) ;

int ain()
{ 
    int num[ ] = {24, 34, 12, 44, 56, 17};
    display1 (&num[0],6); 
    display2 (&num[0],6);
    return 0;
}
//Accessing by pointer
void display1 (int *ptr, int n)
{
    int i;
    for ( i = 0; i <= n - 1 ;i++)
    {
    printf ("element =%d\n", *ptr);
    ptr++; /* increment pointer to point to next element */
    }
}
//Accessing by subscript 
void display2 (int ptr[], int n)
{
    int i;
    for (i=0; i<n-1;i++)
    printf ("element = %d\n", ptr[i]);
}


//flexible array
#include <stdlib.h>

int in()

{
    int max, i, *p;
    printf ("Enter array size: ");
    scanf("%d", &max);
    p = (int*) malloc (max * sizeof(int)); 
    for (i = 0; i <= 5; i++)
    {
        p[i] = i*i;
        printf ("%d ", p[i]);
    }
    return 0;
}

int mul()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};//2,12,6,14,10,16,14,18,18,20
    int i;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        arr[i]=arr[i]*2;

        else
        arr[i]=arr[i]+10;
    }
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
}

int graterthanX()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};//2,12,6,14,10,16,14,18,18,20
    int x,i,count=0;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
      if(arr[i]>x)
      count=count+1;
    }
    printf("%d",count);
    return 0;
}

int difference()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int even_sum=0,odd_sum=0,i;
    for(i=0;i<=9;i++)
    {
        if(i%2==0)
        even_sum=even_sum+arr[i];
        else
        odd_sum=odd_sum+arr[i];
    }

    printf("Sum of elements at even indices: %d",even_sum);
    printf("\nSum of elements at odd indices: %d",odd_sum);
    printf("\nDifference is: %d",odd_sum-even_sum);

    return 0;
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int i,j,count=0,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            for(int k=j+1;k<8;k++)
            {
                if((arr[i]+arr[j]+arr[k])==n){
                count=count+1;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);}
            }
        }
    }
    printf("%d",count);
    return 0;
}