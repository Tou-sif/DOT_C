#include <stdio.h>

int main()
{
    int a = 50.45, b = 60, sum = a+b;
    printf("%d + %d = %d\n", a, b, sum);

    return 0;
}

// not showing .45 because of int data type. need to change the data type. type cast