//Here is an ecological simulation of wolf and rabbit populations. Rabbits eat gras. Wolves eat rabbits. There is plenty of grass, so wolves are the only obstacle to the rabbit population increase. The wolf population increases with the population of rabbits. The day-by-day changes in the rabbit population R and the wolf population W can be expressed by the following formulae:
//R(tomorrow)=(1+a).R(today)-c.R(today).W(today)
//W(tomorrow)=(1-b).W(today)-c.d.R(today).W(today)
//a=0.01 = fractional increase in rabbit population without threat from wolves(0.01 means 1 % increase)
//b=0.005 = fractional decrease in wolf population without rabbit to eat
//c=0.00001 = likelihood that a wolf will encounter and eat a rabbit
//d=0.01 = fractional increase in wolf population attributed to a devoured rabbit.
//Assume that initially there are 10,000 rabbits and 1000 wolves. Write a program to calculate population of rabbit and wolves over a 1000 day period. Have the program print the population every 25 days. See what happens when you start with 500 wolves instead of 1000. try starting with 2000 wolves.

#include<stdio.h>

int main()
{
    float a=0.01, b=0.005, c=0.00001, d=0.01;
    int Rt, Wt, r1, w1,days;
    printf("Enter the Initial number of Rabbits and Wolves: ");
    scanf("%d %d",&r1,&w1);
    printf("Enter the number of Days: ");
    scanf("%d",&days);
    for(int i=1;i<=days;i++){
            Rt=((1+a)*r1)-(c*r1*w1);
            Wt=((1-b)*w1)+(c*d*r1*w1);
            r1=Rt;
            w1=Wt;
            if(i%25==0)
            printf("\nAfter %d days Rabbits = %d  Wolves = %d ",i,Rt,Wt);
        }
    return 0;
}