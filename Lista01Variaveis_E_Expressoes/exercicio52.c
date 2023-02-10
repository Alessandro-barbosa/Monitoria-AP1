#include <stdio.h>

int main(int argc, char const *argv[])
{
    float apostaJogador1, apostaJogador2, apostaJogador3, valorPremio;
    float valor1, valor2, valor3;
    printf("Valor do premio: ");
    scanf("%f", &valorPremio);
    printf("Valor apostado pelo jogador1:> ");
    scanf("%f", &apostaJogador1);
    printf("Valor apostado pelo jogador2:> ");
    scanf("%f", &apostaJogador2);
    printf("Valor apostado pelo jogador3:> ");
    scanf("%f", &apostaJogador3);
    valor1 = (apostaJogador1/valorPremio) * valorPremio;
    valor2 = (apostaJogador2/valorPremio) * valorPremio;
    valor3 = (apostaJogador3/valorPremio) * valorPremio;
    printf("Valor a ser recebido pelo jogador1: %.2f\n Reais", valor1);
    printf("Valor a ser recebido pelo jogador2: %.2f\n Reais", valor2);
    printf("Valor a ser recebido pelo jogador3: %.2f\n Reais", valor3);

    return 0;
}
