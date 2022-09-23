#include <stdio.h>
#include <stdlib.h>

/*
A Structure is a user defined data type that can be used to group elements of
different types into a single type*/

struct employee
{
    char *name;
    int age;
    int salary;
};

int manager(void)
{
    struct employee manager;

    //manager.age = 27;
    printf("Enter the age of manager: ");
    scanf("%d", &manager.age);

    if (manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;
    return manager.salary;
}

int main()
{
    struct employee emp1;
    struct employee emp2;

    printf("Enter the salary of employee1: \n");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee2: \n");
    scanf("%d", &emp2.salary);

    printf("Employee 1 salary is: %d\n", emp1.salary);
    printf("Employee 1 salary is: %d\n", emp1.salary);
    printf("Manager's salary is: %d\n", manager());
    return 0;
}
