#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    float precos[8], maiorPreco = 0, menorPreco = 100000000000;
    char nomes[8][50], nomeMaiorPreco[50], nomeMenorPreco[50];
    int i = 0;
    while(i < 8)
    {
        printf("Nome do produto: ");
        scanf("%50[^\n]", &nomes[i]);

        printf("Preco do produto: ");
        scanf("%f", &precos[i]);
        fflush(stdin);
        if (precos[i] > maiorPreco){
            maiorPreco = precos[i];
            strcpy(nomeMaiorPreco, nomes[i]); //Biblioteca <string.h> usando a função
                                              //strcpy() para atribuir uma string a variável; 
        }
        if(menorPreco > precos[i]){
            menorPreco = precos[i];
            strcpy(nomeMenorPreco, nomes[i]);        
        }
        i++;
    }
    printf("O produto %s Tem o maior preco com %.2f\n", nomeMaiorPreco, maiorPreco);
    printf("O produto %s tem o menor preco com %.2f", nomeMenorPreco, menorPreco);

    return 0;
}
