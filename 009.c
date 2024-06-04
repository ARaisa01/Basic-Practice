#include <stdio.h>

int main()
{
    int angle1, angle2, angle3; //declare three integer variables for the angles
   
    printf("Input two angles of triangle separated by comma : ");
    scanf("%d,%d", &angle1,&angle2); //read the two angles and the comma from the user
    
    angle3 = 180 - (angle1 + angle2); //calculate the third angle using the fact that the sum of angles of a triangle is 180 degrees
    printf("Third angle of the triangle : %d\n", angle3); //print the output
    return 0;
}
