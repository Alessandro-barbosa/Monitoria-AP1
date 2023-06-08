#include <stdio.h>

typedef struct carros
{
    char marca[15];
    int ano;
    float preco;
} Carros;

int main(int argc, char const *argv[])
{
    Carros c[5];    
    float valor = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Marca: ");
        fflush(stdin);
        scanf("%15[^\n]", c[i].marca);
        printf("Ano: ");
        scanf("%d", &c[i].ano);
        printf("Preco: ");
        scanf("%f", &c[i].preco);
        printf("\n");
    }
    printf("Valor a ser mostrado: ");
    scanf("%f", &valor);
    printf("\n---Mostrando os carros---\n\n");
    for (int i = 0; i < 5; i++)
    {
        if(c[i].preco < valor){
            printf("Marca: %s\n", c[i].marca);
            printf("Ano: %d\n", c[i].ano);
            printf("Preco: %.2f\n", c[i].preco);
        }
    }
    
    
    return 0;
}
