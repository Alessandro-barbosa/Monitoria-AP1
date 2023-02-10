#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, sucTriplo, antDobro;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    sucTriplo = 3*numero+1;
    antDobro = 2*numero-1;
    printf("O triplo: %d\n", sucTriplo);
    printf("O Dobro: %d\n", antDobro);
    printf("A soma: %d", sucTriplo+antDobro);
    
    return 0;
}
