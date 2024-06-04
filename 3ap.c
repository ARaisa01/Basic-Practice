#include <stdio.h>
int main ()
{
 char grade;
 printf("Input the grade: ");
 scanf("%c", &grade);

   // Use switch case to check the grade and print the description
    switch (grade)
    {
    case 'E':
        printf("You have chosen: Excellent\n");
        break;
    case 'V':
        printf("You have chosen: Very Good\n");
        break;
    case 'G':
        printf("You have chosen: Good\n");
        break;
    case 'A':
        printf("You have chosen: Average\n");
        break;
    case 'F':
        printf("You have chosen: Fail\n");
        break;
    default:
        printf("Invalid !\n");
    }

    return 0;
}
