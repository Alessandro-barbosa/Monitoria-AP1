#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0, soma = 0;        
    while(num != 1111){
        printf("Insira um numero: ");
        scanf("%d", &num);
        if(num != 1111)
            soma += num;
    }
    printf("Soma dos numeros: %d", soma);

    return 0;
}
