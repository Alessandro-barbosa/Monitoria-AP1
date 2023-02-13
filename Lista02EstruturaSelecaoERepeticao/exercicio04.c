#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valores, total = 0;
    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &valores);
        if(valores != 0){
            if(valores % 2 == 0)
                total += valores;
        }
    } while (valores != 0);
    printf("Soma dos valores pares inteiros: %d", total);
    return 0;
}
