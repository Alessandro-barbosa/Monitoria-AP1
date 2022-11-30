#include <stdio.h>
#define tam 20
int main(int argc, char const *argv[])
{
    int vetor[tam];
    for (int i = 0; i < tam; i++)
    {
        printf("%d valor: ", i+1);
        scanf("%d", &vetor[i]);        
    }
    int final = tam-1;
    for (int i = 0; i < tam/2; i++)
    {
        int aux = vetor[final];
        vetor[final] = vetor[i];
        vetor[i] = aux;
        final--;
    }
    printf("\n---Novo Vetor---\n\n");
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }        
    
    return 0;
}
