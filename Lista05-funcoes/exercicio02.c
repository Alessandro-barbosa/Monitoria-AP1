#include <stdio.h>

int verificarNumero(int numero){
    if(numero > 0)
        return 1;
    else if (numero < 0)
        return -1;
    else
        return  0;
}
int main(){
    int numero = 0;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    int valor = verificarNumero(numero);
    printf("Valor retornado: %d", valor);
    return 0;
}
