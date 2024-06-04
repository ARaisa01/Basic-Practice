#include <stdio.h>
int main()
{

    int a,b;

    printf ("Enter Two Numbers:");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("a is the largest number");
    }

    else if (b>a)
    {
        printf(" b is the largest number");
    }

    else
    {
        printf("Both are equal");
    }



    return 0;
}

