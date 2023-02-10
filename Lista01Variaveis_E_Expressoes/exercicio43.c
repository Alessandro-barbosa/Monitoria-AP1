#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorTotal, valorDesconto = 0, valorParcela;
    float comissaoVendedor;
    printf("Digite o valor total: ");
    scanf("%f", &valorTotal);
    valorDesconto = valorTotal - (valorTotal * 0.10);
    printf("Total a pagar com 10%c de desconto: %.2f\n",37, valorDesconto);
    valorParcela = valorTotal/3;
    printf("Valor da parcela em 3x sem juros: %.2f\n", valorParcela);
    comissaoVendedor = valorDesconto * 0.05;
    printf("Valor comissao vendedor compra a vista: %.2f\n", comissaoVendedor);
    comissaoVendedor = valorTotal * 0.05;
    printf("Valor comissao vendedor compra parcelada: %.2f\n", comissaoVendedor);
    return 0;
}
