#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Program 1
int main()
{   int size;
    printf("Enter the length of string:");
    scanf("%d",&size);

    char *str=(char*)calloc(size+1,1);
    fgets(str,size+1,stdin);
    printf("%s",str);
    free(str);
    return 0;
}