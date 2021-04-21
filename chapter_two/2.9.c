#include <stdio.h>
#include <stdint-gcc.h>
#include <time.h>

void chapter2_nineth(void);
int bitcount(uint8_t x);
int myBitCount(uint8_t x);
int gchaperon_bitcount(uint8_t x);
int powerC(int base, int p);

void chapter2_nineth()
{
    uint8_t x[10] = { 1, 9, 23, 58, 99, 100, 115, 155, 197, 220 };
    for(int i = 0;i < 10;i++)
    {
        int bc1 = bitcount(x[i]);
        int bc2 = myBitCount(x[i]);
        int bc3 = gchaperon_bitcount(x[i]);

        printf("Bitcount of: %d = %d\n", x[i], bc1);
        printf(" MY Bitcount of: %d = %d\n", x[i], bc2);
        printf(" GChaperon Bitcount of: %d = %d\n", x[i], bc3);
    }
}

int gchaperon_bitcount(uint8_t x)
{
    int b;
    for(b = 0;x != 0;x &= x-1)
    {
        b++;
    }

    return b;
}

int bitcount(uint8_t x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}

int powerC(int base, int p)
{
    return base << (p - 1);
}

int myBitCount(uint8_t x)
{
    int b = 0;
    for(int i = 0;i < 8;i++)
    {
        int powOfTwo = powerC(2, i);
        if(powOfTwo > x) break;
        if((x & powOfTwo) == powOfTwo) b++;
    }
    return b;
}

// x = 9 = 00001001
// 00001001 & 00000001 = 00000001
// 00001001 & 00000010 = 00000000
// 00001001 & 00000100 = 00000000
// 00001001 & 00001000 = 00001000

// x = 183 = 10110111
// x - 1 = 182 = 10110110
// (x - 2^0) = (x - 1) = 183
// x != (x - 2^0), b++
// (x - 2^1) = (x - 2) = 181 = 10110101
// x != (x - 2^1), b++
// (x - 2^2) = (x - 4) = 199 = 10110011
// x != (x - 2^1), b++

// 10110111
// 10110110
// 10110110

// b = 0
// 10110111
// 00000001
// 00000001 = 1, b++
// 01011010
// 00000001
// 00000000 = 0, b
