#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define tam 5

int main(int argc, char const *argv[])
{
    int idade = 0, contadorHomens = 0, contadorMulheres = 0, i = 0, mulheresAcima20 = 0;
    float mediaIdade = 0, mediaIdadeHomens = 0; 
    char sexo;

    while(i < tam){        
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite seu sexo: ");
        fflush(stdin);
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        printf("\n");
        switch (sexo){

            case 'F':
                if(idade > 20){
                    mulheresAcima20++;
                }
                contadorMulheres++;     
                break;
            case 'M':
                contadorHomens++;
                mediaIdadeHomens += idade;
                break;
            default:
                printf("\n Nenhum sexo escolhido!\n");
                break;
            }
        mediaIdade += idade;
        i++;
    }
    mediaIdade = mediaIdade / tam;
    mediaIdadeHomens = mediaIdadeHomens / contadorHomens;
    if(contadorHomens > 0){
        printf("Quantidade de homens cadastrados: %d\n", contadorHomens);
        printf("Media idade dos homens: %.2f\n", mediaIdadeHomens);
    }
    if(contadorMulheres > 0){
        printf("Quantidade de mulheres cadastradas: %d\n", contadorMulheres);
        printf("Mulheres acima de 20 anos: %d\n", mulheresAcima20);
    }
    if(contadorHomens > 0 || contadorMulheres > 0){
        printf("Media idade do grupo: %.2f\n", mediaIdade);
    }
    
    printf("Mulheres acima de 20 anos: %d\n", mulheresAcima20);


    return 0;
}
