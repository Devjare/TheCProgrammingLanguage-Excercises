#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calc.h"

#define MAXOP 100

void polishCalcExample()
{
    int type;
    double op2;
    char s[MAXOP];
    while((type = getop(s)) != EOF)
    {
        switch(type)
        {
        case NUMBER:
            push(atof(s));
            break;
        case SIN:
            push(sin(pop()));
            break;
        case EXP:
            push(exp(pop()));
            break;
        case POW:
            op2 = pop();
            push(pow(pop(), op2));
            break;
        case '+':
            push(pop() + pop());
            break;
        case '*':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if(op2 != 0.0)
                push(pop() / op2);
            else
                printf("Error: Zero Divisor!\n");
            break;
        case '%':
            op2 = pop();
            if(op2 != 0.0)
                push( (double)((int) pop() % (int) op2) );
            else
                printf("Error: zero divisor!\n");
            break;
        case '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("Error: Uknown command %s\n", s);
            break;
        }
    }
}
