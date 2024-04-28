#include<stdio.h>
#include<stdlib.h>

//Program 1

/*int main()
{
    int marks;
    printf("Enter mark obtained:");
    scanf("%d",&marks);
    switch(marks)
    {
        case 100: case 99: case 98: case 97: case 96: case 95: case 94: case 93: case 92: case 91: case 90:
        printf("Grade A");
        break;
        case 89: case 88: case 87: case 86: case 85: case 84: case 83: case 82: case 81: case 80:
        printf("Grade B");
        break;
        case 79: case 78: case 77: case 76: case 75: case 74: case 73: case 72: case 71: case 70:
        printf("Grade C");
        break;
        case 69: case 68: case 67: case 66: case 65: case 64: case 63: case 62: case 61: case 60:
        printf("Grade D");
        break;
        case 59: case 58: case 57: case 56: case 55: case 54: case 53: case 52: case 51: case 50:
        printf("Grade E");
        break;
        case 49 ... 1: 
        printf("Grade F");
        break;
        default:
        printf("Invalid Marks");
        break;
    }
    return 0;
}*/

//Program 2

/*int main()
{
    int choice;
    while(1)
    {
        printf("1- Factorial of a number\n");
        printf("2- Check Even or Odd\n");
        printf("3- Area of Circle\n");
        printf("4- Sum of first N natural numbers\n");
        printf("5- Exit\n");
        printf("\nEnter the choice:");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                {
                    int i,n,fact=1;
                    printf("\nEnter a number:");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++)
                    {
                        fact=fact*i;
                    }
                    printf("\nFactorial of %d is %d\n\n",n,fact);
                    break;
                } 

        case 2:
                {
                    int n;
                    printf("Enter a number:");
                    scanf("%d",&n);
                    if(n%2==0)
                    printf("Even");
                    else 
                    printf("Odd");
                    break;
                }

        case 3:
                {
                    float r,area;
                    printf("Enter radius:");
                    scanf("%f",&r);
                    area=3.14*r*r;
                    printf("Area is %f",area);
                    break;
                }
            
        case 4:
                {
                    int n,sum=0,i;
                    printf("Enter the number:");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++)
                    {
                        sum=sum+i;
                    }
                    break;
                }

        case 5:
           exit(0);
           break;
    }
    }
    return 0;
}*/

//Program 3

/*int main()
{
    char x;
    printf("Enter a character:");
    scanf("%c",&x);

    switch(x)
    {
        case'a': case'b': case'c': case'd': case'e': case'f': case'g': case'h': case'i': case'j': case'k': case'l': case'm': case'n': case'o': case'p': case'q': case'r': case's': case't': case'u': case'v': case'w': case'x': case'y': case'z':
        printf("Lower case");
        break;

        case'A': case'B': case'C': case'D': case'E': case'F': case'G': case'H': case'I': case'J': case'K': case'L': case'M': case'N': case'O': case'P': case'Q': case'R': case'S': case'T': case'U': case'V': case'W': case'X': case'U': case'Z':
        printf("Upper case");
        break;

        case 0: case 1: case 2: case 3:  case 4:  case 5:  case 6:  case 7:  case 8:  case 9: 
        printf("Digit");
        break;

        default :
        printf("Special Character");
    }
}*/

//Program 4

/*int main()
{
    char x;
    printf("Enter a alphabet:");
    scanf("%c",&x);

    switch (x)
    {
     case'b': case'c': case'd': case'f': case'g': case'h': case'j': case'k': case'l': case'm': case'n': case'p': case'q': case'r': case's': case't':  case'v': case'w': case'x': case'y': case'z': case'B': case'C': case'D':  case'F': case'G': case'H': case'J': case'K': case'L': case'M': case'N':  case'P': case'Q': case'R': case'S': case'T': case'U': case'V': case'W': case'X': case'Z':
          printf("Consonant");
          break;
    
    case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
          printf("Vowel");
          break;

    default :
    printf("Some other special character");
    }
    return 0;
}*/

//Program 5

/*int main()
{
    int choice;
    while(1)
    {
        printf("1- Calculate LCM of two numbers\n");
        printf("2- Calculate sum of the digits of a number\n");
        printf("3- Volume of Cuboid\n");
        printf("4- Check wether a given number is Prime or Not\n");
        printf("5- Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        
        switch (choice)
        {
        case 1:
            {
                int a,b,L;
                printf("\nEnter two numbers:");
                scanf("%d %d",&a,&b);
                L=a>b?a:b;
                while(L>a*b)
                {
                    if(L%a==0&&L%b==0)
                    break;
                    L++;
                }
                printf("\nLCM is %d\n\n",L);
            }
            break;

        case 2:
            {
              int n,sum=0;
              printf("\nEnter a number:");
              scanf("%d",&n);
              while(n>0)
              {
                sum=sum+n%10;
                n=n/10;
              }
              printf("\nSum of digits is: %d\n\n",sum);
            }
            break;

        case 3:
            {
                int l,b,h,vol;
                printf("Enter Length, Breadth and Height of Cuboid:");
                scanf("%d %d %d",&l,&b,&h);
                vol=l*b*h;
                printf("\nVolume is: %d\n\n",vol);
            }
            break;

        case 4:
            {
                int n,i=2;
                printf("Enter a number:");
                scanf("%d",&n);
                while(i<n)
                {
                    if(n%i==0)
                    {
                    printf("Not Prime\n\n");
                    break;
                    }
                    i++;
                }
                    if(i==n)
                    printf("\nPrime\n\n");
            }
            break;
        case 5:
            exit(0);

        default :
            printf("\nInvalid Choice\nProgram TERMINATED");
            exit(0);
        }
    }
    return 0;
}*/
