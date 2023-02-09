#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Valor centimetros: ");
    scanf("%f", &x);
    x = x / 2.54;
    printf("Valor em polegadas: %.2f", x);

    return 0;
}
