#include <stdio.h>
#include <string.h>

// Program 1
// Write a program to calculate the difference between two time periods.
struct time
{
    int hour;
    int minute;
    int second;
};

void display(struct time t)
{
    printf("%d: %d: %d", t.hour, t.minute, t.second);
}

struct time input()
{
    struct time t;
    printf("Enter time:");
    scanf("%d %d %d", &t.hour, &t.minute, &t.second);
    return t;
}

struct time difference(struct time t1, struct time t2)
{
    struct time temp;
    temp.hour = t1.hour - t2.hour;
    temp.minute = t1.minute - t2.minute;
    temp.second = t1.second - t2.second;
    return temp;
}

int f1()
{
    struct time t1, t2, diff;
    t1 = input();
    t2 = input();
    diff = difference(t1, t2);
    display(diff);
    return 0;
}

// Program 2
// Write a program to store information of 10 students and display them using structure.
struct student
{
    int rollNo;
    char name[20];
    int age;
    char gender; //  M/F
};

struct student inputSt()
{
    struct student temp;

    printf("Enter Roll NO.:");
    scanf("%d", &temp.rollNo);
    while (getchar() != '\n')
        ;
    printf("Enter Name:");
    fgets(temp.name, 20, stdin);
    temp.name[strcspn(temp.name, "\n")] = '\0';

    printf("Enter Age:");
    scanf("%d", &temp.age);

    while (getchar() != '\n')
        ;
    printf("Enter Gender(M/F):");
    scanf("%c", &temp.gender);
    temp.name[strcspn(temp.name, "\n")] = '\0';
    return temp;
}

void displayStudent(struct student s)
{
    printf("%d %s %d %c\n", s.rollNo, s.name, s.age, s.gender);
}

int f2()
{
    struct student s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i] = inputSt();
    }

    for (int i = 0; i < 10; i++)
    {
        displayStudent(s[i]);
    }
    return 0;
}

// Program 3
// Write a program to store information of n students and display them using structure.
int f3()
{
    int size;
    printf("Enter the number of sutdents:");
    scanf("%d", &size);
    struct student s[size];
    for (int i = 0; i < size; i++)
    {
        s[i] = inputSt();
    }
    printf("\033[33m");
    for (int i = 0; i < size; i++)
    {
        displayStudent(s[i]);
    }
    printf("\033[0m");
    return 0;
}

// Program 4
// Write a program to enter the marks of 5 students in chemistry, mathematics and Physics(each out of 100) using a structure named Marks having elements rollNo., name, chem_marks, maths_mark and phy_marks and then display the percentage of each student.

struct Marks
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};

struct Marks inputMarks()
{
    struct Marks stu;
    printf("Enter RollNo.: ");
    scanf("%d", &stu.roll_no);

    while (getchar() != '\n')
        ;
    printf("Enter Name: ");
    fgets(stu.name, 20, stdin);
    stu.name[strcspn(stu.name, "\n")] = '\0';

    printf("Enter the mraks of Chemistry, Physics and Maths: ");
    scanf("%d %d %d", &stu.chem_marks, &stu.phy_marks, &stu.maths_marks);

    return stu;
}

void displayMarks(struct Marks stu)
{
    printf("%d %s %d %d %d\n", stu.roll_no, stu.name, stu.chem_marks, stu.maths_marks, stu.phy_marks);
}

void displayPercentage(struct Marks stu)
{
    stu.percentage = (stu.phy_marks + stu.chem_marks + stu.maths_marks) / 3.0;
    printf("%d %s %f\n", stu.roll_no, stu.name, stu.percentage);
}

int main()
{
    int size;
    printf("Enter the number of sutdents:");
    scanf("%d", &size);
    struct Marks s[size];
    for (int i = 0; i < size; i++)
    {
        s[i] = inputMarks();
    }
    printf("\033[33m");
    for (int i = 0; i < size; i++)
    {
        displayMarks(s[i]);
    }
    printf("\033[0m");

    for (int i = 0; i < size; i++)
    {
        displayPercentage(s[i]);
    }
    return 0;
}
