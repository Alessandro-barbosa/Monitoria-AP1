#include <stdio.h>
#include <stdlib.h>

int dobraNumero(int *valor){
    *valor *= 2;
}
int main(){
    int valor = 0;
    printf("Insira um numero: ");
    scanf("%d", &valor);
    dobraNumero(&valor);
    printf("Valor dobrado: %d", valor);
    return 0;
}
