#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp;
    printf("Temperatura em Celsius: ");
    scanf("%f", &temp);
    temp = temp + 273.15;
    printf("Temperatura em Kelvin: %,2f", temp);
    return 0;
}
