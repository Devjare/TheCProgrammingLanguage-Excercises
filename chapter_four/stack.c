#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    printf("a: %d\n", a);
    if(sp < MAXVAL)
        val[sp++] = f;
    else
        printf("Error: Stack full, can't push %g\n", f);
}

double pop()
{
    if(sp > 0)
        return val[--sp];
    else
        printf("Error: Stack is empty!");
    return 0.0;
}

double peek()
{
    if(sp > 0)
        return val[sp - 1];
    else
        printf("Error: stack is empty!\n");
    return 0.0;
}

