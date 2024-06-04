#include <stdio.h>
int main()
{
    // Declare variables to store marks
    int phy, chem, math, total, total_mp;

    // Input marks from user
    printf("Input the marks obtained in Physics :");
    scanf("%d", &phy);
    printf("Input the marks obtained in Chemistry :");
    scanf("%d", &chem);
    printf("Input the marks obtained in Mathematics :");
    scanf("%d", &math);

    // Calculate total marks and total marks of math and physics
    total = phy + chem + math;
    total_mp = math + phy;

    // Print total marks
    printf("Total marks of Maths, Physics and Chemistry : %d\n", total);
    printf("Total marks of Maths and Physics : %d\n", total_mp);

    // Check eligibility criteria and print result
    if ((math >= 65 && phy >= 55 && chem >= 50 && total >= 190) || (total_mp >= 140))
    {
        printf("The candidate is eligible.\n");
    }
    else
    {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}
