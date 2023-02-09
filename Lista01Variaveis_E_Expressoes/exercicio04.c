#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Insira um numero real: ");
    scanf("%f", &x);
    x *= x;
    printf("Quadrado do numero inserido: %.2f", x);
    return 0;
}
