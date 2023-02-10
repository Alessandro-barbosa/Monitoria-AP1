#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salarioBase, gratificacao = 0.05, imposto = 0.07;
    float salarioFinal = 0, valorImposto, valorGratificacao;
    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);
    valorImposto = salarioBase * imposto;
    valorGratificacao = salarioBase * gratificacao;
    salarioFinal = salarioBase + valorGratificacao - valorImposto;
    printf("Imposto a ser pago: %.2f Reais\n", valorImposto);
    printf("Valor do salario a ser pago: %.2f Reais\n", salarioFinal);
    return 0;
}
