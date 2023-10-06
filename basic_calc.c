#include <stdio.h>

int main()
{
    int num1, num2,  sum, sub, mul, div;
    char a = '+', b = '-', c = 'X', d = '/';
    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    sum = num1+num2;
    printf("%d %c %d = %d\n", num1, a, num2, sum);
    sub = num1-num2;
    printf("%d %c %d = %d\n", num1, b, num2, sub);
    mul = num1*num2;
    printf("%d %c %d = %d\n", num1, c, num2, mul);
    div = num1/num2;
    printf("%d %c %d = %d\n", num1, d, num2, div);

    return 0;
}