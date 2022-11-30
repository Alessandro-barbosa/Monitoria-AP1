#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam = 7, vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("%d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int x = 0, contador2 = 0, contador3 = 0, contador2e3 = 0;
    
    printf("\nmultiplos de 2: \n");
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
            contador2++;
        }
    }
    if (contador2 == 0)
        printf("vazio\n");
    printf("\nmultiplos de 3: \n");
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] % 3 == 0)
        {
            printf("%d ", vetor[i]);
            contador3++;
        }
    }
    if (contador3 == 0)
        printf("vazio\n");
    printf("\nmultiplos de 2 e 3 ao mesmo tempo: \n");
    for (int i = 0; i < tam; i++)
    {
        if (vetor[i] % 3 == 0 && vetor[i] % 2 == 0)
        {
            printf("%d ", vetor[i]);
            contador2e3++;
        }
    }
    if (contador2e3 == 0)
        printf("vazio\n");

    return 0;
}
