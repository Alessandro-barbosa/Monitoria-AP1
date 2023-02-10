#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorProduto, desconto = 12;
    float valorAposDesconto;
    printf("Insira o valor do produto: ");
    scanf("%f", &valorProduto);
    printf("Valor do produto antes do desconto: %.2f\n", valorProduto);
    printf("Porcentagem do desconto: %.2f\n", desconto);
    valorAposDesconto = valorProduto - (valorProduto * (desconto/100));
    printf("Valor do produto apos o desconto: %.2f", valorAposDesconto);
    return 0;
}