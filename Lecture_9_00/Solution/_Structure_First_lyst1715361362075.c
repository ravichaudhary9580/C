//Structure in C Language
//Data Types: 
//1. Primitive Data Types
//  int, char, float, double
//2. Non Primitive Data Types
// User defined data types
// (a) struct
// (b) union
// (c) enum
#include<stdio.h>
#include<string.h>
//1. How to create a data type using struct?
//2. How to declare structure variable?
//3. How to initialize structure member variables during declaration?
//4. How to initialize structure member variables after declaration?
//5. How to create an array of structure variables?
//6. Function returning structure
//7. Function call by passing structure
//8. Structure Pointer
struct Employee
{
    int empid;
    char name[20];
    float salary;
};

void f1()
{
    struct Employee emp[5];
}
struct Employee input()
{
    struct Employee e;
    printf("Enter id, name and salary of an employee");
    scanf("%d",&e.empid);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);

    return e;
}
void display(struct Employee e)
{
    printf("\n%d %s %f",e.empid,e.name,e.salary);
}
int main()
{
    int x;
    struct Employee e1={100,"Ravi",20000 },e2,e3;
    e2.empid=101;
    strcpy(e2.name,"Arun");
    e2.salary=30000;
    e3=input();
    display(e1);
    display(e2);
    display(e3);

}