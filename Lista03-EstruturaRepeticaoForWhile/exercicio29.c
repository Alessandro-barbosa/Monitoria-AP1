#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int entrada = 1, idade = 0, pessoaMaisVelha = 0, homensAcima30 = 0, mulheresAbaixo18 = 0, mulherMaisJovem = 9999999999;
    int contadorPessoas = 0;
    char nome[50], sexo, nomeMulherMaisJovem[50], nomePessoaMaisVelha[50];
    float mediaIdade = 0;

    while (entrada == 1){

        printf("Seu nome: ");
        scanf(" %50[^\n]", &nome);
        printf("Sua idade: ");
        scanf("%d", &idade);
        printf("Seu sexo: ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);

        if(sexo == 70) {// Numero pra letra 'F' com base na tabela ascii
            if(idade < mulherMaisJovem){
                strcpy(nomeMulherMaisJovem, nome);
                mulherMaisJovem = idade;
            }
            if(idade < 18){
                mulheresAbaixo18++;
            }
        }  
        if(sexo == 77){ // Numero para letra 'M' com base na tabela ascii
            if(idade > 30 ){
                homensAcima30++;
            }
        }
        mediaIdade += idade;
        if(idade > pessoaMaisVelha){
            strcpy(nomePessoaMaisVelha, nome);
            pessoaMaisVelha = idade;
        }
        contadorPessoas++;
        printf("\nContinuar? SIM <1> NAO <2>\n");        
        printf("Entrada: ");
        scanf("%d", &entrada);
        printf("\n");
    }
    mediaIdade /= contadorPessoas;
    printf("\n---Mostrando dados---\n\n");
    printf("Nome da pessoa mais velha: %s\n", nomePessoaMaisVelha);
    printf("Nome da mulher mais jovem: %s\n", nomeMulherMaisJovem);
    printf("Media idade do grupo: %.2f\n", mediaIdade);
    printf("Homens acima de 30 anos: %d\n", homensAcima30);
    printf("Mulheres com menos de 18 anos: %d", mulheresAbaixo18);
    
    return 0;
}
