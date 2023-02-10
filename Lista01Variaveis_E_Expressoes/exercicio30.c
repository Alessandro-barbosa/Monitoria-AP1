#include <stdio.h>

int main(int argc, char const *argv[])
{
    float real, cotacaoDolar, dolar;
    printf("Insira o valor em real: ");
    scanf("%f", &real);
    printf("Insira a cotacao do dolar: ");
    scanf("%f", &cotacaoDolar);
    dolar = real * cotacaoDolar;
    printf("O valor do dolar eh: %.2f USD", dolar);
    return 0;
}
