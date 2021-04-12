#include <stdio.h>

void test()
{
    int i = 1;
    while(!i)
    {
        printf("Inside while, i: %d\n", i);
        if(i == 5) i = -1;
        else i++;
    }
    printf("Outside while, i: %d\n", i);
    printf("!1 = %d\n", !1);
    printf("!0 = %d\n", !0);
    printf("!-1 = %d\n", !-1);
}
