#include <stdio.h>
#include <math.h>
int main(){
  // Declare variables to store the coordinates of the points
    double x1, y1, x2, y2;

    // Prompt the user to enter the coordinates
    printf("Input x1: ");
    scanf("%lf", &x1);
    printf("Input y1: ");
    scanf("%lf", &y1);
    printf("Input x2: ");
    scanf("%lf", &x2);
    printf("Input y2: ");
    scanf("%lf", &y2);
 
 
    // Calculate the distance using the formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display the result
    printf("Distance between the said points: %.4f\n", distance);


return 0;   
}
