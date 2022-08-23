#include <stdio.h>
#include <stdlib.h>

/*write a program that declares a structure and prints out its content.
create an employee structure with 3 members
name(character array)
hire date(int)
salary(float)
declare and initialize an instance of an employee type
read in a second employee from the console and store it in a structure of type employee
print out the contents of each employee
*/

struct employee
{
    char name[20];
    char hiredate[10];
    float salary;
};


int main()
{
    struct employee emp = {"Mike", "7/16/15", 76909.00f};

    printf("%s, %s, %.2f\n", emp.name, emp.hiredate, emp.salary);

    printf("Enter employee information\n");
    printf("Name: ");
    scanf("%s", emp.name);

    printf("Hire Date: ");
    scanf("%s", emp.hiredate);

    printf("salary: ");
    scanf("%f", &emp.salary);

    printf("\nname: %s, Hire Date: %s, salary: %.2f", emp.name, emp.hiredate, emp.salary);

    return 0;
}
