#include <stdio.h>

void printFahrCelTable(float, float, int);
float fahrToCelcius(float);
void fahrToCel(void);

void fahrToCel()
{
    printFahrCelTable(0.0f, 300.0f, 20);
}

void printFahrCelTable(float minTemp, float maxTemp, int step)
{
    printf("Fahrenheit\tCelcius\n");
    float celcius = 0.0;
    while(minTemp <= maxTemp)
    {
        celcius = fahrToCelcius(minTemp);
        printf("%9d%12d\n", (int)minTemp, (int)celcius);
        minTemp += step;
    }
}

float fahrToCelcius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32);
}
