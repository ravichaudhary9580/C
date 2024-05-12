#include<stdio.h>
#include<string.h>
//Program 1
struct Employee
{
    int id;
    float salary;
    char name[20];
};


//Program 2
struct Employee input()
{
    struct Employee e;
    printf("Enter employee id, name and salary:");
    scanf("%d",&e.id);
    scanf("%f",&e.salary);
    fgets(e.name,20,stdin);
    return e;
}

void display(struct Employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}

int main()
{
   struct Employee e1;
   e1=input();
   display(e1);
    return 0;
}