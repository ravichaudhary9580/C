#include<stdio.h>
// C=(F-32)*5/9
// C=Celsius, F=Fahrenheit
int main()
{
    float F,C;
    printf("Enter the temperature in (%cF)Fahrenheit:  ",248);
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("\nTemperature in (%cC)Celsius is:  %f %cC",248,C,248);
    return 0;
}