#include <stdio.h>
#include <limits.h>
#include <float.h>

void printAllLimits(void);
void determineAllLimits(void);
void getLibraryDefaultLimits(void);

void chapter2_first()
{
	printf("The minimum for unsingeds is 0, always.\n");
	printAllLimits();
}


void printAllLimits()
{
	printf("---------- LIMITS.H AND FLOAT.H LIBRARY LIMITS -----------------\n");
	getLibraryDefaultLimits();
	printf("---------------------- DETERMINED LIMITS -----------------------\n");
	determineAllLimits();
}

void getLibraryDefaultLimits()
{
	printf("Unsigned short int MAX: %u\n", USHRT_MAX);
    printf("Unsigned int MAX: %u\n", UINT_MAX);
    printf("Unsigned long int MAX: %lu\n", ULONG_MAX);
    printf("Signed short int MAX: %d\n", SHRT_MAX);
    printf("Signed short int MIN: %d\n", SHRT_MIN);
    printf("Signed int MAX: %d\n", INT_MAX);
    printf("Signed int MIN: %d\n", INT_MIN);
    printf("Signed long int MAX: %li\n", LONG_MAX);
    printf("Signed long int MIN: %li\n", LONG_MIN);

    printf("Unsigned char MAX: %u\n", UCHAR_MAX);
    printf("Signed char MAX: %d\n", SCHAR_MAX);
    printf("Signed char MIN: %d\n", SCHAR_MIN);
    printf("Signed char MIN: %d\n", CHAR_MIN);
}

void determineAllLimits()
{
	unsigned char uc_max = -1;
    unsigned short int usi_max = -1;
    unsigned int ui_max = -1;
    unsigned long int uli_max = -1;

	signed char sc_max = uc_max / 2;
	signed char sc_min = sc_max + 1;

	signed short int ssi_max = usi_max / 2;
	signed short int ssi_min = ssi_max + 1;

	signed int si_max = ui_max / 2;
	signed int si_min = si_max + 1;

	signed long int sli_max = uli_max / 2;
	signed long int sli_min = sli_max + 1;

    printf("Unsigned short int MAX: %u\n", usi_max);
    printf("Unsigned int MAX: %u\n", ui_max);
    printf("Unsigned long int MAX: %lu\n", uli_max);
    printf("Signed short int MAX: %d\n", ssi_max);
    printf("Signed short int MIN: %d\n", ssi_min);
    printf("Signed int MAX: %d\n", si_max);
    printf("Signed int MIN: %d\n", si_min);
    printf("Signed long int MAX: %li\n", sli_max);
    printf("Signed long int MIN: %li\n", sli_min);

    printf("Unsigned char MAX: %u\n", uc_max);
    printf("Signed char MAX: %d\n", sc_max);
    printf("Signed char MIN: %d\n", sc_min);
}
