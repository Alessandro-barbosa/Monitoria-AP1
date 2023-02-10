#include <stdio.h>

int main(int argc, char const *argv[])
{
    float alturaDegrau, alturaDesejada, quantidadeDegraus;
    printf("Digite a altura desejada: ");
    scanf("%f", &alturaDesejada);
    printf("Digite a altura do Degrau: ");
    scanf("%f", &alturaDegrau);
    quantidadeDegraus = alturaDesejada/alturaDegrau;
    printf("Quantidade de degraus necessarios: %.2f\n", quantidadeDegraus);
    return 0;
}
