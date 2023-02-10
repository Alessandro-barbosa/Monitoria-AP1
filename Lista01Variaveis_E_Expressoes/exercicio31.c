#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, numAnte, numSuce;
    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);
    numAnte = numero - 1;
    numSuce = numero + 1;
    printf("Numero sucessor: %d\n", numSuce);
    printf("Numero antecessor: %d", numAnte);
    return 0;
}
