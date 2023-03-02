#include <stdio.h>

int main(int argc, char const *argv[])
{
    int contadorPares = 0, contadorImpares = 0, num = 0, i = 0;

    while (i < 6){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &num);
        if(num % 2 == 0)
            contadorPares++;
        else
            contadorImpares++;

        i++;
    }
    printf("\nNumeros pares: %d\n", contadorPares);
    printf("Numeros impares: %d", contadorImpares);
    return 0;
}
