#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Valor polegadas: ");
    scanf("%f", &x);
    x = x * 2.54;
    printf("Valor em centimetros: %.2f", x);

    return 0;
}
