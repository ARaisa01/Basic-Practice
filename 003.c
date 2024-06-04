#include <stdio.h>

int main()
{
    char id[11]; // to store the employee's ID
    int hours; // to store the working hours
    double rate; // to store the salary amount per hour
    double salary; // to calculate and store total salary

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", id); // read the ID as a string

    printf("Input the working hrs: ");
    scanf("%d", &hours); 

    printf("Salary amount/hr: ");
    scanf("%lf", &rate); 

    salary = hours * rate; // calculate the salary
    printf("Employees ID = %s\n", id); // print the ID
    printf("Salary = U$ %.2lf\n", salary); // print the salary with two decimal places

    return 0;
}