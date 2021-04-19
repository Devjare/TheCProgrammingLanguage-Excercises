#include <stdio.h>
#include <stdint-gcc.h>

void chapter2_seventh(void);

uint8_t invert(uint8_t x, uint8_t p, uint8_t n);

void chapter2_seventh()
{
    uint8_t x = invert(183, 5, 2);
    uint8_t x1 = invert(207, 4, 3);
    // x = 207 = 11001111, p = 4, n = 3
    uint8_t x2 = invert(54, 6, 3);

    printf("x: %d\n", x);
    printf("x1: %d\n", x1);
    printf("x2: %d\n", x2);
}

uint8_t invert(uint8_t x, uint8_t p, uint8_t n)
{
    // x = 54 = 00110110, p = 6, n = 3
    // ((2 ^ (p + 1)) - 1) & ~((2 ^ (p - 1)) - 1)
    // ((2 ^ (6 + 1)) - 1) & ~((2 ^ (6 - 1)) - 1)
    // ((2 ^ (7)) - 1) & ~((2 ^ (5)) - 1)
    // (128 - 1) & ~(32 - 1)
    // (128 - 1) & ~(32 - 1)
    // (127 & ~31)
    // (10000000 & ~00011111)
    // 10000000 & 11100000
    // 10000000

    uint8_t aux = ((power(2, p + 1) - 1) & ~(power(2, p - 1) - 1));
    uint8_t res = (~aux & x) & ~aux;
    return res;
}
