#include <stdio.h>

long long int somarAlgorismos(long long int numero){
    long long int soma = 0;
    while(numero > 0){
        soma += numero % 10;
        numero = numero / 10;
    }
    return soma;
}
int main(){
    long long int numero = 0;
    printf("Insira um numero inteiro: ");
    scanf("%lld", &numero);
    if(numero <= 0){
        printf("Numero invalido!");
        return 0;
    }
    long long int total = somarAlgorismos(numero);
    printf("Soma dos algarismos: %lld", total);
    return 0;
}
