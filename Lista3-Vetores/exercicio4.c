#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam = 10, comparador = 0;
    int vetor1[tam], vetor2[tam];

    printf("Insira valores para o primeiro vetor: \n");
    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor1[i]);
    }
    printf("\nInsira valores para o segundo vetor: \n");
    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor2[i]);

        if (vetor1[i] == vetor2[i]) 
            comparador++;
    }
    if (comparador == tam)
        printf("Os vetores sao iguais!");
    else
        printf("Os vetores nao sao iguais!");

    return 0;
}
