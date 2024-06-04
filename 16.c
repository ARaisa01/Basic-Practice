#include <stdio.h>

int main() {
    int rollNo, physics, chemistry, computerApp;
    char name[50];

    // Input
    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNo);

    printf("Input the Name of the Student: ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%d %d %d", &physics, &chemistry, &computerApp);

    // Calculation
    int totalMarks = physics + chemistry + computerApp;
    float percentage = (float)totalMarks / 3;
    
    // Output
    printf("\nRoll No: %d\n", rollNo);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %d\n", physics);
    printf("Marks in Chemistry: %d\n", chemistry);
    printf("Marks in Computer Application: %d\n", computerApp);
    printf("Total Marks = %d\n", totalMarks);
    printf("Percentage = %.2f\n", percentage);
  // Division
    if (percentage >= 60) {
        printf("Division = First\n");
    } else if (percentage >= 45) {
        printf("Division = Second\n");
    } else {
        printf("Division = Fail\n");
    }

    return 0;
}

