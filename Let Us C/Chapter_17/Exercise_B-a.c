#include <stdio.h>
#include <string.h>

/*(a) Create a structure called student that can contain data given below:
      Roll number, Name, Department, Course, Year of joining
      Assume that there are not more than 450 students int the college.
      (1) Write a function to print names of all students who joined in a particuler year.
      (2) Write a function to print the data of a student whose a roll number is received by the function.*/
#include <stdio.h>
#include <string.h>

// Student structure to store student information
struct student
{
    int rollNo;      // Student roll number
    char name[20];   // Student name
    char dept[10];   // Department name
    char course[10]; // Course name
    int yoj;         // Year of joining
};

// Convert string to uppercase
void toUpperCase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
}

// Get total number of students in college from user
int totalStudent()
{
    int student;
    printf("\033[35mEnter total number of Student in College: \033[0m");
    scanf("%d", &student);
    printf("\n");
    return student;
}

// Get input for a single student record
struct student input()
{
    struct student temp;

    printf("\033[32mEnter Roll No.: \033[0m");
    scanf("%d", &temp.rollNo);

    printf("\033[32mEnter Year of Joining: \033[0m");
    scanf("%d", &temp.yoj);

    // Clear input buffer after scanf
    while (getchar() != '\n')
        ;

    printf("\033[32mEnter Name: \033[0m");
    if (fgets(temp.name, sizeof(temp.name), stdin) != NULL)
    {
        toUpperCase(temp.name);
        temp.name[strcspn(temp.name, "\n")] = '\0';
    }

    printf("\033[32mEnter Department: \033[0m");
    if (fgets(temp.dept, sizeof(temp.dept), stdin) != NULL)
    {
        toUpperCase(temp.dept);
        temp.dept[strcspn(temp.dept, "\n")] = '\0';
    }

    printf("\033[32mEnter Course: \033[0m");
    if (fgets(temp.course, sizeof(temp.course), stdin) != NULL)
    {
        toUpperCase(temp.course);
        temp.course[strcspn(temp.course, "\n")] = '\0';
    }
    printf("\n");

    return temp;
}

// Display students who joined in a specific year
// %-8d  : Left-aligned integer that takes up at least 8 characters
// %-15s : Left-aligned string that takes up at least 15 characters
// %-10s : Left-aligned string that takes up at least 10 characters
// %-10s : Left-aligned string that takes up at least 10 characters
// %d    : Integer with default alignment
void displayStudentByYoJ(struct student *stu, int totalStu, int year)
{
    printf("\n\033[33mStudents who joined in year %d:\033[0m\n", year);
    printf("-----------------------------------------------------\n");
    printf("Roll No.\tName\t\tDepartment\tCourse\t\t\033[33mYear\033[0m\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < totalStu; i++)
    {
        if ((stu + i)->yoj == year)
        {
            printf("%-8d\t%-15s\t%-10s\t%-10s\t\033[33m%d\033[0m\n",
                   (stu + i)->rollNo,
                   (stu + i)->name,
                   (stu + i)->dept,
                   (stu + i)->course,
                   (stu + i)->yoj);
        }
    }
    printf("-----------------------------------------------------\n");
}

// Display students from a specific department
void displayStudentByDept(struct student *stu, int totalStu, char *dept)
{
    printf("\n\033[33mStudents in department %s:\033[0m\n", dept);
    printf("-----------------------------------------------------\n");
    printf("Roll No.\tName\t\t\033[33mDepartment\033[0m\tCourse\t\tYear\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < totalStu; i++)
    {
        if (strcmp((stu + i)->dept, dept) == 0)
        {
            printf("%-8d\t%-15s\t\033[33m%-10s\033[0m\t%-10s\t%d\n",
                   (stu + i)->rollNo,
                   (stu + i)->name,
                   (stu + i)->dept,
                   (stu + i)->course,
                   (stu + i)->yoj);
        }
    }
    printf("-----------------------------------------------------\n");
}

// Display students enrolled in a specific course
void displayStudentByCourse(struct student *stu, int totalStu, char *course)
{
    printf("\n\033[33mStudents enrolled in course %s:\033[0m\n", course);
    printf("-----------------------------------------------------\n");
    printf("Roll No.\tName\t\tDepartment\t\033[33mCourse\033[0m\t\tYear\n");
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < totalStu; i++)
    {
        if (strcmp((stu + i)->course, course) == 0)
        {
            printf("%-8d\t%-15s\t%-10s\t\033[33m%-10s\033[0m\t%d\n",
                   (stu + i)->rollNo,
                   (stu + i)->name,
                   (stu + i)->dept,
                   (stu + i)->course,
                   (stu + i)->yoj);
        }
    }
    printf("-----------------------------------------------------\n");
}

// Display details of a student with specific roll number
void studentDetail(struct student *stu, int totalStu, int rollno)
{
    printf("\n\033[33mStudent Details for Roll No. %d:\033[0m\n", rollno);
    printf("-----------------------------------------------------\n");

    for (int i = 0; i < totalStu; i++)
    {
        if ((stu + i)->rollNo == rollno)
        {
            printf("Roll No.     : %d\n", (stu + i)->rollNo);
            printf("Name         : %s\n", (stu + i)->name);
            printf("Department   : %s\n", (stu + i)->dept);
            printf("Course       : %s\n", (stu + i)->course);
            printf("Year Joined  : %d\n", (stu + i)->yoj);
        }
    }
    printf("-----------------------------------------------------\n");
}

int main()
{
    printf("\n=== Student Database Management System ===\n\n");
    printf("\033[32mInitializing Database...\033[0m\n");

    int totalStu = totalStudent();
    struct student stu[totalStu];

    // Input student records
    for (int i = 0; i < totalStu; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        stu[i] = input();
    }

    printf("\n\033[34m=== Database Created Successfully ===\033[0m\n");

    int choice = 0;
    printf("\n\033[35m=== Available Operations ===\033[0m\n");
    printf("\033[32m1. Search students by Year of Joining\n");
    printf("2. Search students by Department\n");
    printf("3. Search students by Course\n");
    printf("4. Search student by Roll Number\033[0m\n");
    printf("\033[31m5. Exit\033[0m\n");

    while (choice != 5)
    {
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            int year;
            printf("Enter year of joining: ");
            scanf("%d", &year);
            displayStudentByYoJ(stu, totalStu, year);
            break;
        }
        case 2:
        {
            char dept[10];
            while (getchar() != '\n')
                ; // Clear buffer
            printf("Enter department name: ");
            if (fgets(dept, sizeof(dept), stdin) != NULL)
            {
                toUpperCase(dept);
                dept[strcspn(dept, "\n")] = '\0';
            }
            displayStudentByDept(stu, totalStu, dept);
            break;
        }
        case 3:
        {
            char course[10];
            while (getchar() != '\n')
                ; // Clear buffer
            printf("Enter course name: ");
            if (fgets(course, sizeof(course), stdin) != NULL)
            {
                toUpperCase(course);
                course[strcspn(course, "\n")] = '\0';
            }
            displayStudentByCourse(stu, totalStu, course);
            break;
        }
        case 4:
        {
            int rollNo;
            printf("Enter roll number: ");
            scanf("%d", &rollNo);
            studentDetail(stu, totalStu, rollNo);
            break;
        }
        case 5:
            printf("\nExiting program. Goodbye!\n");
            break;
        default:
            printf("\n\033[31mError: Invalid choice. Please enter a number between 1 and 5.\033[0m\n");
            break;
        }
    }
    return 0;
}