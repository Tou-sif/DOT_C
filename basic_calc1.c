#include <stdio.h>

int main()
{
    int num1, num2, value;
    char sign;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    value = num1+num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1, sign, num2, value);


    value = num1-num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1, sign, num2, value);


    value = num1*num2;
    sign = 'X';
    printf("%d %c %d = %d\n", num1, sign, num2, value);


    value = num1/num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1, sign, num2, value);


    // comment section
    printf("Hello ");
    /*We have printed Hello, now we shall print World.
    Note: This is a multiline comment.*/
    printf("World!\n");

    return 0;
}