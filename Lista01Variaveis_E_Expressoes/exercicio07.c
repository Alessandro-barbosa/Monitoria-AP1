#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp;
    printf("Temperatura em fahrenheit: ");
    scanf("%f", &temp);
    temp = 5 * (temp - 32)/9;
    printf("Temperatura em Celsius: %.2f", temp);

    return 0;
}
