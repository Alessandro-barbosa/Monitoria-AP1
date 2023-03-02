#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma = 0, tam = 10;
    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("\nSoma dos valores de dentro do vetor: %d", soma);

    return 0;
}
