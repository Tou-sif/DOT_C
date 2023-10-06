#include <stdio.h>
int main()
{
    int n;
    double x;
    x = 10.5, n = (int)x;

    printf("value of n is %d\n",n);
    printf("Value of x is %f\n",x);

    return 0;
}
// this is done to not typecast .
// typecasting is the process where the compiler automatically converts a number value from double to integer 
//if the variable is declared as an int. even if it the value itself is a double or float.
// typecasting was shown in the decimal.c file
