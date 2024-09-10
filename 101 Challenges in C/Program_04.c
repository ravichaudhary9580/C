//The weight of a commodity is input through the keyboard. Write a program to convert and print this weight in grams, quintals, metric tons and pounds.
// 1 kg = 1000 gm
// 1 quintal = 100 kg
// 1 ton = 1000 kg
// 1 kg = 2.2024 lbs
#include<stdio.h>
int main()
{
    float weight;
    printf("Enter the weight in(Kg): ");
    scanf("%f",&weight);
    printf("\nWeight in Gram is: %f",weight*1000.0);
    printf("\nWeight in Quintal is: %f",weight/100.0);
    printf("\nWeight in Ton is: %f",weight/1000.0);
    printf("\nWeight in Pounds is: %f",weight*2.2024);
    return 0;
}