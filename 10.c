#include <stdio.h>
#define PI 3.1416 //define the value of pi

int main()
{
    float radius, volume;
    printf("Input the radius of the sphere : ");
    scanf("%f", &radius); //read the radius from the user
    
    //calculate the volume using the formula V = (4/3) * pi * r^3
    volume = (4.0 / 3.0) * PI * radius * radius * radius; 
   
    printf("The volume of sphere is %.6f.\n", volume); //print the output with 6 decimal places
    return 0;

}
