#include <stdio.h>

int main()
{
    double celsius; // to store the temperature in Centigrade
    double fahrenheit; // to store the temperature in Fahrenheit

    printf("Input a temperature (in Centigrade):\n ");
    scanf("%lf", &celsius); // read the temperature as a double

    fahrenheit = (celsius * 9 / 5) + 32; // convert Centigrade to Fahrenheit using the formula
    printf("The temperature is %.6lf degrees Fahrenheit.\n", fahrenheit); // print the temperature with six decimal places

    return 0;
}
