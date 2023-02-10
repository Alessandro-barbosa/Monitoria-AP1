#include <stdio.h>

int main(int argc, char const *argv[])
{
    float acres, metrosQuadrados;
    printf("Digite o valor em acres: ");
    scanf("%f", &acres);
    metrosQuadrados = acres * 4048.58;
    printf("Valor em metros quadrados: %.2f", metrosQuadrados);
    return 0;
}
