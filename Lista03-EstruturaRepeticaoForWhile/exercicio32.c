#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma = 0, menorValor = 0, contador = 0, contadorPares = 0, num = 0;
    float media = 0;
    char opcao;
    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(contador == 0){
            menorValor = num;
        }
        else if(menorValor > num){
            menorValor = num;
        }        
        if(num % 2 == 0){
            contadorPares++;
        }
        soma += num;
        contador++;
        printf("Continuar? (S/N): ");
        scanf(" %c", &opcao);        
    } while (opcao == 's' || opcao == 'S');
    
    media = (float) soma / contador;

    printf("Somatorio de todos os numeros: %d\n", soma);
    printf("O %d eh o menor valor\n", menorValor);
    printf("Media dos numeros: %.2f\n", media);
    printf("Foram encontrados %d valores pares\n", contadorPares);
    
    return 0;
}
