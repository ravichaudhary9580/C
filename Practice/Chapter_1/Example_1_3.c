#include<stdio.h>
// Calculation of Aggregate and Percentage mark obtained by a Student 
int main()
{
    int s1,s2,s3,s4,s5,aggr;
    float percent;
    printf("Enter the marks obtained by student in 5 Subject:\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    aggr=s1+s2+s3+s4+s5;
    percent=aggr/5;
    printf("\nAggregate Mark is:%d",aggr);
    printf("\nPercent Mark is:%f",percent);
    return 0;
}