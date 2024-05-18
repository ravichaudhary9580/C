#include<stdio.h>
#include<string.h>
//Program 1
struct Employee
{
    int empid;
    char name[20];
    float salary;
};


//Program 2
struct Employee input()
{
    struct Employee e;
    printf("Enter employee id, name and salary:");
    scanf("%d",&e.empid);
    fgets(e.name,20,stdin);
    scanf("%f",&e.salary);
    return e;
}

//Program 3
void display(struct Employee e)
{
    printf("\n%d %s %f",e.empid,e.name,e.salary);
}

//Program 4


void higest_salary(struct Employee a[],int size)
{
    int i, max;
    max=emp[0].salary;
    for(i=1;i<size;i++)
    {
        if(max<emp[i].salary)
        {
            max=emp[i].salary;
        }
    }
    
}

int main()
{
//    struct Employee e1;
//    e1=input();
//    display(e1);
    struct Employee emp[5],max;

    emp[0].empid=101;
    strcpy(emp[0].name,"Arun");
    emp[0].salary=30000;

    emp[1].empid=102;
    strcpy(emp[1].name,"Balu");
    emp[1].salary=10000;

    emp[2].empid=103;
    strcpy(emp[2].name,"Golu");
    emp[2].salary=15000;

    emp[3].empid=104;
    strcpy(emp[3].name,"Ravi");
    emp[3].salary=50000;

    emp[4].empid=105;
    strcpy(emp[4].name,"Veer");
    emp[4].salary=40000;
//   int i;
//   for(i=0;i<5;i++)
i=highest_salary(emp,5)
  display(emp[i]);


    return 0;
}


