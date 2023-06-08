#include <stdio.h>

int main(int argc, char const *argv[])
{
    struct Local
    {
        char nome[64];
        int idade;
        char endereco[100];
    };
    struct Local local;
    printf("Insira o nome: \n");
    scanf("%64[^\n]", &local.nome);
    printf("Insira a idade: \n");
    scanf("%d", &local.idade);
    fflush(stdin);
    printf("Insira o endereco: \n");
    scanf("%100[^\n]", &local.endereco);
    printf("Nome: %s\n", local.nome);
    printf("Idade: %d\n", local.idade);
    printf("Endereco: %s\n", local.endereco);
    
    return 0;
}
