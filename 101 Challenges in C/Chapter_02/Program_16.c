//In weight class of a boxer is decided as per the following table. Write a program that receives weight as input and prints out the boxer's weight class. 
// Boxer Class       Weight in Pounds
// Flyweight          <115
// Bantamweight       115-121
// Featherweight      122-153
// Middleweight       154-189
// Heavyweight        >=190

#include<stdio.h>
int main()
{
    int weight;
    printf("Enter the weight:");
    scanf("%d",&weight);
    if(weight>0&&weight<115)
    printf("\nFlyweight");
    else if(weight>=115&&weight<=121)
    printf("\nBantamweight");
    else if(weight>=122&&weight<=153)
    printf("\nFeatherweight");
    else if(weight>=154&&weight<=189)
    printf("\nMiddleweight");
    else
    printf("\nHeavyweight");
    return 0;
}