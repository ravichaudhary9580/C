#include<stdio.h>

int main()
{
    int n,i;
    printf("<--You have Only 3 chances-->");
    printf("\nEnter a Even number:");
    for(i=0;i<3;i++)
    {
        printf("\n%d Chances: ",i+1);
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("You Win");
            break;
        }
        
    }
    if(i==3)
    printf("Game Over");
    return 0;
}