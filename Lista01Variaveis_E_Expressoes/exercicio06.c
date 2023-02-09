#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp;
    printf("Temperatura Celsius: ");
    scanf("%f", &temp);
    temp = temp * 1.8 + 32;
    printf("Temperatura em Fahrenheit: %.2f", temp);

    return 0;
}
