#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Valor em litros: ");
    scanf("%f", &x);
    x = x/1000;
    printf("Valor em metros cubicos: %.2f", x);
    return 0;
}
