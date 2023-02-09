#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp;
    printf("temp em Kelvin: ");
    scanf("%f", &temp);
    temp = temp - 273.15;
    printf("Temperatura em Celsius: %.2f", temp);

    return 0;
}
