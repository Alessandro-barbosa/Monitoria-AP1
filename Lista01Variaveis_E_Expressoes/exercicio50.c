#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anoNascimento, idade, anoAtual;
    printf("Insira sua idade: "); 
    scanf("%d", &idade);
    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);
    anoNascimento = anoAtual - idade;
    printf("Voce provavelmente nasceu nos anos de: %d %d %d", anoNascimento-1, anoNascimento, anoNascimento+1);

    return 0;
}
