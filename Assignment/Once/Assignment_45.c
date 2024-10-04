#include <stdio.h>
#include<string.h>
//Program 1
struct TIME {
    int seconds;
    int minutes;
    int hours;
};

void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int pro1()
{
    struct TIME startTime, stopTime, diff;

    printf("Enter the start time.\n");
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the stop time.\n");
    printf("Enter hours, minutes, and seconds: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    // Calculate the difference between start and stop time
    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nTime Difference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d = %d:%d:%d\n", stopTime.hours, stopTime.minutes, stopTime.seconds,
           diff.hours, diff.minutes, diff.seconds);

    return 0;
}

// Computes the difference between time periods
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff) {
    if(stop.seconds < start.seconds) {
        --stop.minutes;
        stop.seconds += 60;
    }
    diff->seconds = stop.seconds - start.seconds;

    if(stop.minutes < start.minutes) {
        --stop.hours;
        stop.minutes += 60;
    }
    diff->minutes = stop.minutes - start.minutes;
    diff->hours = stop.hours - start.hours;
}


//Program 2 //Program 3
struct student
{
    int class;
    char name[20];
    int id;
    char gender[10];
};

void input(struct student *s)
{
    scanf("%d",&s->class);
    fflush(stdin);
    fgets(s->name,10,stdin);
    s->name[strlen(s->name)-1]='\0';
    scanf("%d",&s->id);
    fflush(stdin);
    fgets(s->gender,10,stdin);
    s->gender[strlen(s->gender)-1]='\0';
}

void output(struct student s)
{
    printf("%d %s %d %s\n",s.class,s.name,s.id,s.gender);
}

int pro2_3()
{
    int i,n;
    printf("Enter the number of student:");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter the class, name, id and gender:\n");
    for(i=0;i<n;i++)
    {
        input(&s[i]);
    }

    for(i=0;i<n;i++)
    {
        output(s[i]);
    }
    return 0;
}

//Program 4
struct Marks
{
    int rollno;
    char name[20];
    int chem;
    int phy;
    int math;
};

float percentage(struct Marks s)
{
   
    return ((s.chem+s.math+s.phy)/3.0);

}

void input_data(struct Marks *s)
{
    scanf("%d",&s->rollno);
    fflush(stdin);
    fgets(s->name,20,stdin);
    s->name[strlen(s->name)-1]='\0';
    scanf("%d %d %d",&s->phy,&s->chem,&s->math);
    
}

int main()
{
    struct Marks student[2];
    int i;
    printf("Enter the rollno, name, phy, chem, math data: \n");
    for(i=0;i<2;i++)
    {
        input_data(&student[i]);
    }
    for(i=0;i<2;i++)
    {
        printf("%s ",student[i].name);
        printf("%0.2f %%\n",percentage(student[i]));
    }
    return 0;
}

