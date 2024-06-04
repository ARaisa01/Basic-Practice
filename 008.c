#include <stdio.h>

int main()
{
    int num1, num2; //declare two integer variables
    
    printf("Input any two numbers separated by comma : ");
    
    scanf("%d,%d", &num1,&num2); //read the two numbers and the comma from the user
    
    printf("The sum of the given numbers : %d\n", num1 + num2); //print the sum of the numbers
    printf("The difference of the given numbers : %d\n", num1 - num2); //print the difference of the numbers
    printf("The product of the given numbers : %d\n", num1 * num2); //print the product of the numbers
    printf("The quotient of the given numbers : %.6f\n", (float)num1 / num2); //print the quotient of the numbers as a float with 6 decimal places
    return 0;
}