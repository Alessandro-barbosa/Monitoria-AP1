#include <stdio.h>

int main(int argc, char const *argv[])
{
    float metrosQuadrados, acres;
    printf("Digite o valor em metros Quadrados: ");
    scanf("%f", &metrosQuadrados);
    acres = metrosQuadrados * 0.000247;
    printf("Valor em acres: %.4f", acres);
    return 0;
}
