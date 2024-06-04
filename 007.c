 #include <stdio.h>

int main()
{
    int hours, minutes, total;
    printf("Input hours: ");
    scanf("%d", &hours); //read the hours from the user
    printf("Input minutes: ");
    scanf("%d", &minutes); //read the minutes from the user
    total = hours * 60 + minutes; //calculate the total number of minutes
    printf("Total: %d minutes.\n", total); //print the output
    return 0;
}
