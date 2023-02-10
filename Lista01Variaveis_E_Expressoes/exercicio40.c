#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorBruto, valorDia = 30, desconto = 0.08, valorDesconto, valorLiquido;
    int dias;
    printf("Digite os dias necessarios: ");
    scanf("%d", &dias);
    valorBruto = valorDia * dias;
    valorDesconto = valorBruto * desconto;
    valorLiquido = valorBruto - valorDesconto;
    printf("Valor bruto: %.2f\n", valorBruto);    
    printf("Valor a ser descontando: %.2f\n", valorDesconto);    
    printf("Valor liquido a ser pago: %.2f\n", valorLiquido);
    return 0;
}
