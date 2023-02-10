#include <stdio.h>

int main(int argc, char const *argv[])
{
    float comprimento, largura, precoMetro;
    float custo;
    printf("Insira o comprimento da tela: ");
    scanf("%f", &comprimento);
    printf("Insira o largura da tela: ");
    scanf("%f", &largura);
    printf("Insira o preco do metro: ");
    scanf("%f", &precoMetro);

    custo = (comprimento * largura) * precoMetro;
    printf("O custo para fazer a cerca eh de: %.2f Reais", custo);
    
    return 0;
}
