#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam = 5, vetor[tam], busca = 0, contbusca = 0;

    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor[i]);
    }
    printf("\nInsira um valor para ser achado dentro do vetor: ");
    scanf("%d", &busca);
    for (int i = 0; i < tam; i++)
    {
        if(vetor[i] == busca){
            printf("Valor achado na posicao: %d\n", i);
            contbusca++;
        }
    }
    if(contbusca == 0){
        printf("\nNao possui esse valor dentro do vetor! ");
    }
    
    return 0;
}