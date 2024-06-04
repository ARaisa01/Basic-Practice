#include <stdio.h>
#define KMS_TO_MILES 0.621371 //define the conversion factor

int main()
{
    float kms, miles;
    printf("Input kilometers per hour: ");
    scanf("%f", &kms); //read the input from the user
    
    miles = kms * KMS_TO_MILES; //convert kms to miles
    printf("%.6f miles per hour\n", miles); //print the output with 6 decimal places
    return 0;
}

