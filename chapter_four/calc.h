#include <stdlib.h>

#define NUMBER '0'
#define SIN 'S'
#define EXP 'E'
#define POW 'P'

extern int a;
extern char arr[];

int getop(char []);
void push(double);
double pop(void);
double peek(void);
int getch(void);
void ungetch(int);
void polishCalcExample(void);
