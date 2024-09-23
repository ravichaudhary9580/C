#include<stdio.h>
#include<math.h>
//Program 1
// Write a program to print all the ASCII values and their equivalent character using while loop. The ASCII value vary from 0 to 255.
/* int main()
{
    int ch=0;
    while(ch<=255)
    {
        printf("%c ", ch);
        ch++;
    }
    return 0;
} */

//Program 2
//Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called Armstrong number. For example, 153 = (1*1*1)+(5*5*5)+(3*3*3)
/* int main()
{
    int n=1;
    int temp,countdigit;
    int digit,sum;
    int power,i;
    // printf("Enter a number:");
    // scanf("%d",&n);
    while(n<=500)
    {
        temp=n;
        countdigit=0;
        sum=0;
        while(temp)
        {
            temp=temp/10;
            countdigit++;
        }
        temp=n;
        while(temp)
        {
            digit=temp%10;
            power=i=1;
            while(i<=countdigit)
            {
                power=power*digit;
                i++;
            }
            sum=sum+power;
            temp=temp/10;
        }
        if(n==sum)
            printf("%d is Armstrong number\n",n);
        n++;
    }
    return 0;
} */

//Program 3
//Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
// - There are 21 matchsticks.
// - The computer asks the player to pick 1,2,3,or 4 matchsticks.
// - After the person picks, the computer does its picking.
// - Whoever is forced to pick up the last matchstick loses the game.
/* int main() {
    int matchsticks = 21;
    int user_pick, computer_pick;

    printf("\033[1mWelcome to the Matchstick Game!\033[0m\n");
    printf("There are\033[1m 21\033[0m matchsticks.\n");
    printf("\033[32mYou can pick 1, 2, 3, or 4 matchsticks at a time.\033[0m\n");
    printf("Whoever is forced to pick up the last matchstick loses the game.\n");

    while (matchsticks > 1) {
        // User's turn
        printf("\nYour turn: ");
        scanf("%d", &user_pick);

        // Validate user's pick
        if (user_pick < 1 || user_pick > 4) {
            printf("\033[1;31mInvalid pick! You must pick between 1 and 4 matchsticks.\033[0m\n");
            continue;
        }

        matchsticks -= user_pick;
        printf("Matchsticks remaining: %d\n", matchsticks);

        // Check if user lost
        if (matchsticks == 1) {
            printf("\033[31mYou are forced to pick the last matchstick. You lose!\033[0m\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - user_pick;
        matchsticks -= computer_pick;
        printf("Computer picks %d matchsticks.\n", computer_pick);
        printf("Matchsticks remaining: %d\n", matchsticks);

        // Check if computer lost
        if (matchsticks == 1) {
            printf("\033[31mComputer is forced to pick the last matchstick. Computer loses!\033[0m\n");
            break;
        }
    }

    return 0;
}
 */

//Program 4
//Write a program to enter numbers until user wants. At the end it should display the count of positive, negative and zeros entered.
int main()
{
    
}
