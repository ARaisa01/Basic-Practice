#include<stdio.h>
int main(){

//variables
float radius, perimeter;
const  float pi=3.1416;

//input from user
printf("Enter radius of the circle in inches: ");
scanf("%f", &radius);

//calculation

perimeter = 2 * pi * radius;
float area = pi * radius * radius;

//display result

printf("permiter of the circle= %.6f inches.\n" ,perimeter);

printf("Area of the circle= %.6f square inches.\n",area);

return 0;


}