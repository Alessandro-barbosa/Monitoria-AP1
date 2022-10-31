#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int tam = 10;
    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Valor: ");
        scanf("%d", &vetor[i]);
    }
    printf("Vetor na ordem inversa: \n");
    for (int i = tam-1; i >= 0; i--)
    {
        printf("%d ", vetor[i]);        
    }
    
    return 0;
}
