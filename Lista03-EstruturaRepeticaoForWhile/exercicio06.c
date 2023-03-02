#include <stdlib.h>

int main()
{
    int primeiroTermo = 0, razao = 0, somaTotal = 0;
    printf("Primerio termo da PA: ");
    scanf("%d", &primeiroTermo); 
    printf("Razao da PA: ");
    scanf("%d", &razao);
    printf("Termos: ");
    int termo = primeiroTermo;
    for (int i = 0; i < 10; i++)
    {   
        printf("%d, ", termo);
        somaTotal += termo;
        termo += razao;        
    }

    printf("\nSoma total dos termos da PA: %d", somaTotal);
    
    return 0;
}
