// An Electricity  utility company charges its customers on the following basis depending on the category they belong to and the units that they have consumed for the month.
// Category       Fixed cost         Unit consumed       Price
// Residential    Rs. 50/mth for     0 to 100 units      Rs. 3.76/unit
//                1-phase meter      101 to 300 units    Rs. 7.21/unit

//               Rs. 200/mth for    301 to 500 units    Rs. 9.95/unit
//               3-phase meter      >500 units          Rs. 11.31/unit

// Commercial     Rs. 220/mth        0 to 200 units      Rs. 6.60/unit
//                                   >200 units          Rs. 9.62/unit

// Industrial     Rs. 250/mth        0 to 20 KW          Rs. 5.43/unit
//                                    >20 KW             Rs. 6.88/unit

// Agriculture    Rs. 340/mth        0 to 5 HP           Rs. 258/HP/mth
//                                   >5 HP               Rs. 360/HP/mth

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    printf("\033[31;42m##########################################################\033[0m\n");
    printf("    ********Calculate the price of Electricity********\n");
    printf("\n\033[32m1-Residential\033[0m");
    printf("\n\033[33m2-Commercial\033[0m");
    printf("\n\033[34m3-Industrial\033[0m");
    printf("\n\033[35m4-Agriculture\033[0m");
    printf("\n\033[31m5-Exit\033[0m");
    while (choice != 5)
    {
        printf("\nSelect a Category:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int Phase, val = 1;
            int Fixed;
            int Consumption;
            float Price;
            printf("\n\033[32m*********************************\033[0m\n");
            printf("~~~~~Residential~~~~~\n");
            printf("\033[32m*********************************\033[0m\n");
            printf("***Select Phase***\n");
            printf("1-Single Phase Meter\n");
            printf("2-Three Phase Meter");

            while (val == 1)
            {
                printf("\nEnter the choice:");
                scanf("%d", &Phase);
                switch (Phase)
                {
                case 1:
                {
                    Fixed = 50;
                    val = 0;
                    break;
                }
                case 2:
                {
                    Fixed = 200;
                    val = 0;
                    break;
                }
                default:
                {
                    val = 1;
                    printf("\033[31mWrong Input\033[0m");
                }
                }
            }
            printf("\nEnter the Consumption:");
            scanf("%d", &Consumption);
            if (Consumption >= 0 && Consumption <= 100)
            {
                Price = Fixed + (3.76 * Consumption);
            }
            else if (Consumption >= 101 && Consumption <= 100)
            {
                Price = Fixed + (3.76 * Consumption);
            }
            else if (Consumption >= 301 && Consumption <= 500)
            {
                Price = Fixed + (9.95 * Consumption);
            }
            else
            {
                Price = Fixed + (11.31 * Consumption);
            }
            printf("Price of Electricity:Rs. %0.2f\n", Price);

            break;
        }
        case 2:
        {
            int Consumption;
            float Price;
            printf("\n\033[33m*********************************\033[0m\n");
            printf("~~~~~Commercial~~~~~\n");
            printf("\033[33m*********************************\033[0m\n");
            printf("Enter the Consumption:");
            scanf("%d", &Consumption);
            if (Consumption >= 0 && Consumption <= 200)
                Price = 220 + (6.60 * Consumption);
            else
                Price = 220 + (9.62 * Consumption);
            printf("Price of Electricity: %0.2f\n", Price);
            break;
        }
        case 3:
        {
            int Consumption;
            float Price;
            printf("\n\033[34m*********************************\033[0m\n");
            printf("~~~~~Industrial~~~~~\n");
            printf("\033[34m*********************************\033[0m\n");
            printf("Enter the Consumption:");
            scanf("%d", &Consumption);
            if (Consumption >= 0 && Consumption <= 20)
                Price = 250 + (5.43 * Consumption);
            else
                Price = 250 + (6.88 * Consumption);
            printf("Price of Electricity: %0.2f\n", Price);
            break;
        }
        case 4:
        {
            int Consumption;
            float Price;
            printf("\n\033[35m*********************************\033[0m\n");
            printf("~~~~~Agriculture~~~~~\n");
            printf("\033[35m*********************************\033[0m\n");
            printf("Enter the Consumption:");
            scanf("%d", &Consumption);
            if (Consumption >= 0 && Consumption <= 5)
                Price = 340 + (258 * Consumption);
            else
                Price = 340 + (360 * Consumption);
            printf("Price of Electricity: %0.2f\n", Price);
            break;
        }
        case 5:
        {
            printf("\n\033[31m****Program SUCCESSFULLY Closed****\033[0m\n");
            exit(0);
            break;
        }
        default:
            printf("\n\033[31mInvalid Input\033[0m");
        }
    }
    return 0;
}