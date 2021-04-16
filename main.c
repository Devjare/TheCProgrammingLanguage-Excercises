#include <stdio.h>

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

    /* CHAPTER TWO EXCERSICES FUNCTIONS */
    // chapter2_first();
    // chapter2_second();
    // chapter2_third();
    // chapter2_fourth();
    // chapter2_fifth();
    // chapter2_sixth();

    // unsigned int n = 28;
    // unsigned int x = getbits(n, 5, 3);
    // printf("n %d\n", n);
    // printf("Bits: %d\n", x);

    unsigned x = setbits3(28, 4, 3, 10);
    printf("x: %d\n", x);

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

int setbits(x, p, n, y)
{

}

