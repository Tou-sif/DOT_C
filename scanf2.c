#include <stdio.h>

int main()
{
    double a,b,sum;
    
    scanf("%lf",&a);
    scanf("%lf",&b);

    sum = a+b;

    printf("The sum is: %0.2lf\n", sum);

    return 0;

}