#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    scanf("%d", &n);

    if (n<0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is positve.\n");
    }

    return 0;
}