#include<stdio.h>
#include<math.h>
//Program 1
//If a five digit number is entered through the keyboard, write a program to calculate the sum of its digits.(Hint: Use the modulus operator (%))
/* int main()
{
    int n,sum;
    printf("Enter a 5 digit number:");
    scanf("%d",&n);//12345
    sum=n%10;//5
    n=n/10;//1234
    sum=sum+n%10;//5+4
    n=n/10;//123
    sum=sum+n%10;//5+4+3
    n=n/10;//12
    sum=sum+n%10;//5+4+3+2
    n=n/10;//1
    sum=sum+n%10;//5+4+3+2+1
    printf("Sum of digits is \033[32m%d\033[0m",sum);
    return 0;
} */

//Program 2
//Write a program to receive Cartesian co-ordinate (x,y) of a point and convert them into polar co-ordinates(r,Φ).
//Hint: r = sqrt(x²+y²) and Φ = tan⁻¹(y/x)
/* int main()
{
    int x,y;
    float r,phi;
    printf("Enter the Cartesian co-ordinate (x,y): ");
    scanf("%d %d",&x,&y);
    r = sqrt(x*x+y*y);
    phi = atan((y*1.0)/x);

    printf("Polar Co-ordinates (r,%c): %0.2f %0.2f",232,r,phi);
    return 0;
} */

//Program 3
//Write a program too receive values of latitude (L1,L2) and longitude (G1,G2), in degrees, of two places on the earth and output the distance (D) between them in nautical miles. The formula for distance in nautical miles:
// D = 3963 cos⁻¹(sin L1 sin L2 + cos L1 cos L2 * cos(G2-G1))
/* int main()
{
    float L1,L2,G1,G2,D;
    printf("Enter the Latitude and Longitude of Place 1: ");
    scanf("%f %f",&L1,&G1);
    printf("Enter the Latitude and Longitude of Place 2: ");
    scanf("%f %f",&L2,&G2);

    D = 3963*(acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2-G1)));

    printf("Distance b/w Place 1 and Place 2 in nautical miles is:\033[32m %f \033[0m",D);
    return 0;
} */


//Program 4
//Wind-chill factor is the felt air temperature on exposed skin due to wind. The wind-chill temperature is always lower than the air temperature, and is calculated as per the following formula:
// wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * v⁰.¹⁶
// where t is temperature and v is wind velocity. Write a program to receive values of t and v and calculate wind-chill factor(wcf).
/* int main()
{
    float t,v,wcf;
    printf("Enter the temperature and velocity of wind: ");
    scanf("%f %f",&t,&v);

    wcf = 35.74 + (0.6215*t) + ((0.4275*t - 35.75) * pow(v,0.16));

    printf("Wind-chill factor is: %f",wcf);
    return 0;
} */

//Program 5
// If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.
int main()
{
    int angle;
    printf("Enter the angle:");
    scanf("%d",&angle);
    printf("Sin(%d) is %f",angle,sin(angle));
    return 0;
}