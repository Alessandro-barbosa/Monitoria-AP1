#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0, soma = 0, i = 0;

    while (i < 7){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num);
        soma += num;
        i++;
    }
    printf("Soma dos numeros: %d", soma);
    
    return 0;
}
