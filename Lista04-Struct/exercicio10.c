#include <stdio.h>
#include <string.h>
#define tam 5

typedef struct Pessoa
{
    char nome[100];
    char endereco[100];
    int telefone;
} pessoa;

int main(int argc, char const *argv[])
{

    pessoa p[5], aux;

    for (int i = 0; i < tam; i++)
    {
        printf("Digite seu nome: ");
        scanf("%100[^\n]", &p[i].nome);
        fflush(stdin);
        printf("Digite seu endereco: ");
        scanf("%100[^\n]", &p[i].endereco);
        printf("Digite seu telefone: ");
        scanf("%d", &p[i].telefone);
        fflush(stdin);
    }

    for (int i = 0; i < tam; i++){
        pessoa aux;
        for (int j = 0; j < tam - 1; j++){
            int x = strcmp(p[j].nome, p[j + 1].nome); // Comparação de palavra com strcmp biblioteca <string.h>
            if (x == 1 || x == 0){
                aux = p[j+1];
                p[j+1] = p[j];
                p[j] = aux;
            }
        }
    }
    for (int i = 0; i < tam; i++){
        printf("Nome: %s\n", p[i].nome);
        printf("Endereco: %s\n", p[i].endereco);
        printf("Telefone: %d\n", p[i].telefone);
    }

    return 0;
}
