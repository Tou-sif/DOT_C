#include <stdio.h>
int main()
{
    int a;
    a = 1000;
    printf("a = %d\n",a);

    a = -21000;
    printf("a = %d\n",a);

    a = 10000000;
    printf("a = %d\n",a);

    a = -10000000;
    printf("a = %d\n",a);

    a = 100020004000503; // -1194388745
    printf("a = %d\n",a);

    a = -4325987632; // -31020336
    printf("a = %d\n",a);

    return 0;  
}

// -2147483648 -- +2147483647  int type range. 0 is in the postive side.
// int in c has 4 bytes of memory space. 4 bytes = 32 bits. Written in codepad.