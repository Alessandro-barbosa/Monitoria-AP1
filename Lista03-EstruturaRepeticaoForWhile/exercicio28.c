#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int idade, entrada = 1, maiorIdade = 0, contadorHomens = 0;
    int mulherMaisJovem = 99999999999;
    float mediaIdadeHomens = 0;
    char sexo;
    while(entrada == 1){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite seu sexo: ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        if(sexo == 70){ // valor numerico para 'F' usando tabela ASCII
            if(mulherMaisJovem > idade){
                mulherMaisJovem = idade;
            }
        }
        if(sexo == 77){ // Valor numerico para 'M' usando tabela ASCII
            contadorHomens++;
            mediaIdadeHomens += idade;
        }
        if(maiorIdade < idade)
            maiorIdade = idade;            
        printf("Continuar?\n");
        printf("SIM <1> NAO <2>\n");
        printf("Entrada: ");
        scanf("%d", &entrada);
    }
    mediaIdadeHomens = mediaIdadeHomens/contadorHomens;
    printf("\n\n\n");
    printf("----Mostrando Dados----\n\n");
    printf("Maior idade lida: %d\n", maiorIdade);    
    printf("Quantidade de homens cadastrados: %d\n", contadorHomens);
    printf("Media idade entre os homens: %.2f\n", mediaIdadeHomens);
    printf("Idade da mulher mais jovem: %d\n", mulherMaisJovem);
    
    
    return 0;
}
