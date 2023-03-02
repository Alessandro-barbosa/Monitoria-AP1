#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam = 5, somaPositivos = 0, qtdNegativo = 0;
    float vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%f", &vetor[i]);

        if (vetor[i] >= 0){
            somaPositivos+= vetor[i];
        }
        else{
            qtdNegativo++;
        }        
    }
    printf("\nSoma dos numeros positivos: %d\n", somaPositivos);
    printf("Quantidade de numeros negativos: %d", qtdNegativo);

    
    return 0;
}
