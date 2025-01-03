#include <stdio.h>
#include <string.h>
// Program 1
struct Employee
{
    int empid;
    char name[20];
    float salary;
};

// Program 2
struct Employee input()
{
    struct Employee e;
    printf("Enter employee id, name and salary:");
    scanf("\n%d", &e.empid);
    // fflush(stdin) is used to clear the input buffer after reading numeric input
    // However, using fflush(stdin) is undefined behavior according to the C standard
    // A better approach would be to use while(getchar()!='\n'); to clear the input buffer
    fflush(stdin);
    fgets(e.name, 20, stdin);
    // Remove the trailing newline character from the name string by replacing it with null terminator
    e.name[strlen(e.name) - 1] = '\0';
    return e;
}

// Program 3
void display(struct Employee e)
{
    printf("\n%d %s %f", e.empid, e.name, e.salary);
}

// Program 4
void highest_salary(struct Employee emp[], int size)
{
    struct Employee max;
    int i;
    max = emp[0];
    for (i = 1; i < size; i++)
    {
        if (max.salary < emp[i].salary)
        {
            max = emp[i];
        }
    }
    display(max);
}

// Program 5
void sort(struct Employee emp[], int size)
{
    struct Employee temp;
    int i, j;
    for (j = 0; j < size - 1; j++)
    {
        for (i = 0; i <= size - 1 - j; i++)
        {
            if (emp[i].salary < emp[i + 1].salary)
            {
                temp = emp[i];
                emp[i] = emp[i + 1];
                emp[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        display(emp[i]);
    }
}

// Program 6
void sortbyname(struct Employee emp[], int size)
{
    struct Employee temp;
    int i, j;
    for (j = 0; j < size - 1; j++)
    {
        for (i = 0; i < size - 1 - j; i++)
        {
            if ((strcmp(emp[i].name, emp[i + 1].name)) == 1)
            {
                temp = emp[i];
                emp[i] = emp[i + 1];
                emp[i + 1] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        display(emp[i]);
    }
}

int main()
{
    /* struct Employee e1;
    e1=input();
    display(e1); */
    struct Employee emp[5], max;

    emp[0].empid = 101;
    strcpy(emp[0].name, "Arun");
    emp[0].salary = 30000;

    emp[1].empid = 102;
    strcpy(emp[1].name, "Balu");
    emp[1].salary = 10000;

    emp[2].empid = 103;
    strcpy(emp[2].name, "Golu");
    emp[2].salary = 15000;

    emp[3].empid = 104;
    strcpy(emp[3].name, "Ravi");
    emp[3].salary = 50000;

    emp[4].empid = 105;
    strcpy(emp[4].name, "Ceer");
    emp[4].salary = 40000;

    // highest_salary(emp,5);
    sortbyname(emp, 5);

    return 0;
}
