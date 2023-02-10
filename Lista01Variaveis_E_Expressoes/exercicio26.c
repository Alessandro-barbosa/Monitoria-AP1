#include <stdio.h>

int main(int argc, char const *argv[])
{
    float metrosQuadrados, hectares;
    printf("Digite o valor em metros quadrados: ");
    scanf("%f", &metrosQuadrados);
    hectares = metrosQuadrados * 0.0001;
    printf("Valor em hectares: %.4f", hectares);
    return 0;
}
