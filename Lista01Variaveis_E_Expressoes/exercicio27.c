#include <stdio.h>

int main(int argc, char const *argv[])
{
    float hectares, metrosQuadrados;
    printf("Digite o valor em hectares: ");
    scanf("%f", &hectares);
    metrosQuadrados = hectares * 10000;
    printf("Valor em metros Quadrados: %.3f", metrosQuadrados);
    return 0;
}