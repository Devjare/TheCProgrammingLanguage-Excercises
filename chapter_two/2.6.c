#include <stdio.h>
#include <stdint-gcc.h>

void chapter2_sixth(void);
uint8_t setbits(uint8_t x, uint8_t p, uint8_t n, uint8_t y);
uint8_t getNumberWithOnesPlaced(uint8_t p, uint8_t n);
uint8_t setbits_minified(uint8_t x, uint8_t p, uint8_t n, uint8_t y);

void chapter2_sixth()
{
    uint8_t displaced = setbits_minified(203, 4, 3, 187);
    uint8_t displaced2 = setbits_minified(28, 4, 3, 10);
    uint8_t displaced3 = setbits_minified(187, 5, 2, 142);
    printf("Result: %d\n", displaced);
    printf("Result 2: %d\n", displaced2);
    printf("Result 2: %d\n", displaced3);
}

uint8_t setbits(uint8_t x, uint8_t p, uint8_t n, uint8_t y)
{
    /* FOR CASE:
        x = 203 -> BIN: 11001011
        y = 187 -> BIN: 10111011
        p = 4
        n = 3
    */
    // 10111011 << 2 = 11101100
    uint8_t ydisplaced = y << (p + 1 - n);

    // onesinplace puts only ones in the desired position
    // n times. In this case, p = 4, n = 3:
    // onesInPlace = 00011100
    uint8_t onesInPlace = getNumberWithOnesPlaced(p, n);

    // leaves only the bits of y that are of interest.
    // 11101100 & 00011100 = 00001100
    uint8_t ydisplacedANDonesIP = ydisplaced & onesInPlace;

    // 11001011 | 00011100 = 11011111, auxiliar bits number.
    uint8_t xORonesIP = x | onesInPlace;

    // ~00001100 = 11110011, auxiliar bits number.
    uint8_t ydisplacedANDonesIPComp = ~ydisplacedANDonesIP;

    // ~(11110011 & 00011100) = ~(00010000) = 11101111 -> SET ALL TO ONE, EXCEPT THE BITS TO CHANGE.
    uint8_t yDispANDonesIPCompANDonesIPComp = ~(ydisplacedANDonesIPComp & onesInPlace);

    // 11101111 & 11011111 = 11001111, gets the resut.
    uint8_t res = yDispANDonesIPCompANDonesIPComp & xORonesIP;

    return res;
}

uint8_t getNumberWithOnesPlaced(uint8_t p, uint8_t n)
{
    // case p = 4, n = 3
    // power(2, 8) - 1 = 2^8 - 1 = 255 = 11111111
    uint8_t fullOnes = power(2, 8) - 1;
    // first = 11111111 >> n = 00011111
    uint8_t first = fullOnes >> n;
    // second = (2^n-1) - 1 = (2^2) - 1 = (4) - 1 = 3 = 00000011
    uint8_t second = power(2, n - 1) - 1;
    // firstComp = ~first = ~00011111 = 11100000
    uint8_t firstComp = ~first;
    // third = (firstComp | second) = (11100000 | 00000011) = 11100011
    uint8_t third = firstComp | second;
    // ~third = ~11100011 = 00011100
    return ~third;
}

uint8_t setbits_minified(uint8_t x, uint8_t p, uint8_t n, uint8_t y)
{
    uint8_t aux = getNumberWithOnesPlaced(p, n);
    return (~((~(((y << (p + 1 - n)) & aux)) & aux)) & (x | aux));
}
