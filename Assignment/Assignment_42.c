#include<stdio.h>

//Program 1
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nAfter swaping: %d %d",a,b);
    return 0;
}

//Program 2
void search_all_occurrences(char *str, char ch, int *arr)
{
    
}

int main()
{
    char str[]="ravichaudhary";
    char ch='a';
    int arr[5];
    search_all_occurrences(&str,ch,&arr);
    return 0;
}