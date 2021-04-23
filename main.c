#include <stdio.h>
#include <limits.h>

unsigned getbits(unsigned x, int p, int n);

int main()
{
    /* CHAPTER ONE EXCERCISES FUNCTIONS */
    // oneFourteen();
    // oneThirteen();
    // oneFifteen();
    // longestLine();
    // test();
    //sevenTeen();
    // eighTeen();
    // nineTeen();
    // twenty();
    // ################# PENDING ###############
    // twentyOne();
    // twentyTwo();
    // twentyThree();
    // twentyFour();

    /* CHAPTER TWO EXCERSICES FUNCTIONS */
    // chapter2_first();
    // chapter2_second();
    // chapter2_third();
    // chapter2_fourth();
    // chapter2_fifth();
    // chapter2_sixth();

    // ################# PENDING ###############
    // chapter2_seventh(); ***** FIX *****
    // chapter2_eighth(); ***** FIX *****
    // chapter2_nineth();
    //chapter2_tenth();

    // chapter3_first();
    // chapter3_second();
    // chapter3_third();
    // chapter3_fourth();
    // chapter3_fifth();
    // chapter3_sixth(); /* PENDING */

    chapter4_first();

    // unsigned int n = 28;
    // unsigned int x = getbits(n, 5, 3);
    // printf("n %d\n", n);
    // printf("Bits: %d\n", x);
    /* CLEAR SCREEN

    char s[1000];
    int len = getline(s, 1000);
    while(len < 10)
    {
        clearScreen();
        len = getline(s, 1000);
    }
    printf("Finally ends!");
    */
    return 0;
}

unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
