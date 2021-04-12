#include <stdio.h>

float celciusToFahr(float);

void celToFahr()
{
    float max = 300.0;
    printf("Celcius\tFahrenheit\n");
    for(float min = -17.8;min <= max;min += 10.0)
        printf("%6.1f\t%6.1f\n", min, celciusToFahr(min));
}

float celciusToFahr(float celcius)
{
    return 9.0 * celcius / 5.0 + 32.0;
}
