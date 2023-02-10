#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2, num3, total;
    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    printf("Insira o segundo valor: ");
    scanf("%f", &num2);
    printf("Insira o terceiro valor: ");
    scanf("%f", &num3);
    total= num1*num1 + num2*num2 + num3*num3;
    printf("Soma dos quadrados dos valores lidos: %.2f", total);

    return 0;
}
