#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3, soma;
    printf("Insira tres numeros para somar \n\n");
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("Terceiro numero: ");
    scanf("%d", &num3);
    soma = num1+num2+num3;
    printf("Soma dos tres numeros inteiros: %d", soma);

    return 0;
}
