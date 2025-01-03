#include <stdio.h>
#include <string.h>

// Program 1
// Define a structure Employee with member variable id, name, salary.
struct Employee
{
    int id;
    char name[20];
    int salary;
};

// Program 2
// Write a function to take input employee data from the user. [Refer structure from question 1]
/**
 * Gets employee information from user input
 * Handles input buffer clearing and string termination
 * return Employee struct containing entered data
 */
struct Employee input()
{
    struct Employee e;

    // Get employee ID
    printf("Enter the id: ");
    scanf("%d", &e.id);

    // Clear input buffer after scanf to prevent issues with fgets
    while (getchar() != '\n')
        ;

    // Get employee name with bounds checking
    printf("Enter the name: ");
    fgets(e.name, sizeof(e.name), stdin);
    e.name[strcspn(e.name, "\n")] = '\0'; // Remove trailing newline

    // Get employee salary
    printf("Enter the salary: ");
    scanf("%d", &e.salary);

    return e;
}

// Program 3
// Write a function to display employee data. [Refer structure from question]
//  Function to display employee data
//  Takes Employee struct as input and prints id, name and salary
//  Format: id name salary on one line
void display(struct Employee emp)
{
    printf("%d %s %d\n", emp.id, emp.name, emp.salary);
}

// Program 4
// Write a function to find the highest salary employee from a given array of 10 employees. [Refer structure from question]
//  Function finds highest salary employee from array of employees
//  Takes pointer to Employee array as input
//  Returns Employee struct with highest salary

struct Employee highestSalaryEmployee(struct Employee *emp, int size)
{
    struct Employee highest;
    highest = *emp;
    for (int i = 1; i < size; i++)
    {
        if ((highest.salary) < (emp + i)->salary)
            highest = *(emp + i);
    }
    return highest;
}
/* int main()
{
    int size;
    printf("Enter the number of Employee:");
    scanf("%d", &size);
    struct Employee group[size];
    for (int i = 0; i < size; i++)
    {
        printf("Employee %d\n", i + 1);
        group[i] = input();
    }
    for (int i = 0; i < size; i++)
    {
        display(group[i]);
    }
    printf("\n\n\n");
    display(highestSalaryEmployee(group, size));
} */

// Program 5
// Write a function to sort employees according to their salaries [refer structure from question 1]
void sortEmployees(struct Employee *emp, int size)
{
    struct Employee temp;
    for (int round = 1; round < size; round++)
    {
        for (int i = 0; i < size - round; i++)
        {
            if ((emp + i)->salary > (emp + i + 1)->salary){
                temp = *(emp + i);
                *(emp + i) = *(emp + i + 1);
                *(emp + i + 1) = temp;
            }
        }
    }
}

/* int main()
{
    struct Employee emp[5], max;

    emp[0].id = 101;
    strcpy(emp[0].name, "Arun");
    emp[0].salary = 30000;

    emp[1].id = 102;
    strcpy(emp[1].name, "Balu");
    emp[1].salary = 10000;

    emp[2].id = 103;
    strcpy(emp[2].name, "Golu");
    emp[2].salary = 15000;

    emp[3].id = 104;
    strcpy(emp[3].name, "Ravi");
    emp[3].salary = 50000;

    emp[4].id = 105;
    strcpy(emp[4].name, "Ceer");
    emp[4].salary = 40000;
    for (int i = 0; i < 5; i++)
    {
        display(emp[i]);
    }
    printf("\n\033[32mAfter Sorting Employees according to  Salary.\033[0m\n");
        sortEmployees(emp, 5);
    for (int i = 0; i < 5; i++)
    {
        display(emp[i]);
    }
    return 0;
} */

//Program 6
//Write a program to sort employees according to their names.[Refer structure from question 1]
void sortEmployeesByName(struct Employee *emp,int size){
    struct Employee temp;
    for (int round = 1; round < size; round++)
    {
        for (int i = 0; i < size - round; i++)
        {
            if ((strcmp((emp+i)->name,(emp+i+1)->name))==-1){
                temp = *(emp + i);
                *(emp + i) = *(emp + i + 1);
                *(emp + i + 1) = temp;
            }
        }
    }

}

int main()
{
    struct Employee emp[5], max;

    emp[0].id = 101;
    strcpy(emp[0].name, "Arun");
    emp[0].salary = 30000;

    emp[1].id = 102;
    strcpy(emp[1].name, "Balu");
    emp[1].salary = 10000;

    emp[2].id = 103;
    strcpy(emp[2].name, "Golu");
    emp[2].salary = 15000;

    emp[3].id = 104;
    strcpy(emp[3].name, "Ravi");
    emp[3].salary = 50000;

    emp[4].id = 105;
    strcpy(emp[4].name, "Ceer");
    emp[4].salary = 40000;
    for (int i = 0; i < 5; i++)
    {
        display(emp[i]);
    }
    printf("\n\033[32mAfter Sorting Employees according to  Salary.\033[0m\n");
        sortEmployeesByName(emp, 5);
    for (int i = 0; i < 5; i++)
    {
        display(emp[i]);
    }
    return 0;
}