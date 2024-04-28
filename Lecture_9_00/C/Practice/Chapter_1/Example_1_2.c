#include<stdio.h>

int main()
{
    float km, m, cm, feet, inch;
    printf("Enter the distance between two cities(KM):");
    scanf("%f",&km);
    m=1000*km;
    cm=100*m;
    inch=cm/2.54;
    feet=inch/12;
    printf("\nDistance in Meters:%f",m);
    printf("\nDistance in Centimeters:%f",cm);
    printf("\nDistance in Feet:%f",feet);
    printf("\nDistance in Inches:%f",inch);
    return 0;
}