#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tam = 20; 
    int arr[tam]; //Criando variável do vetor

    for (int i = 0; i < tam; i++) //Atribuindo valores para o vetor
    {
        printf("Valor: ");
        scanf("%d", &arr[i]);
    }
    printf("Mostrando valores pares: \n");
    for (int i = 0; i < tam; i++) //Mostrando apenas valores pares que estão dentro do vetor
    {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\nMostrando todo o vetor:\n");
    for (int i = 0; i < tam; i++) //Mostrando todos os valores que estão armazenados dentro do vetor
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
