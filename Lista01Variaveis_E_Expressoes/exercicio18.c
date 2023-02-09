#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Valor em metros cubicos: ");
    scanf("%f", &x);
    x = 1000 * x;
    printf("Valor em litros: %.2f", x);
    return 0;
}
