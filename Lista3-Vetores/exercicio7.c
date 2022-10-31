#include <stdio.h>
int main(int argc, char const *argv[])
{
    int tam = 5, vetor1[tam], vetor2[tam], vetor3[tam];
    printf("Valores para o primeiro vetor: \n");
    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor1[i]);
    }
    printf("\nValores para o segundo vetor: \n");
    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor2[i]);
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    printf("\nSoma de cada posicao dos vetores em um novo vetor: \n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor3[i]);
    }
    
    

    return 0;
}
