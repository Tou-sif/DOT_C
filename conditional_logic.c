#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    if (n>=0)
    {
        printf("The number is positive.\n");
    }
    else
    {
        printf("The number is negative.\n");
    }

    return 0;
}