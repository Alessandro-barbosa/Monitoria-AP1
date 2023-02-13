#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opcao = 0, valores, total = 0;
    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &valores);
        if(valores != -1)
            total += valores;        
    } while (valores != -1);    
    printf("Soma dos valores: %d", total);
    return 0;
}
