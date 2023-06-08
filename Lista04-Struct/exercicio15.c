#include <stdio.h>
#include <ctype.h>
typedef struct livro
{
    char titulo[30];
    char autor[15];
    int ano;
} Livro;
    
int main()
{
    Livro livros[5];
    char busca[30];
    for (int i = 0; i < 5; i++)
    {
        printf("Titulo: ");
        fflush(stdin);
        scanf("%30[^\n]", livros[i].titulo);
        printf("Autor: ");
        fflush(stdin);
        scanf("%15[^\n]", livros[i].autor);
        printf("ano: ");
        scanf("%d", &livros[i].ano);
    }
    printf("\nInsira um titulo para busca: ");
    fflush(stdin);
    scanf("%30[^\n]", busca);
    printf("\n\n--Mostrando livros--\n\n");
    for (int i = 0; i < 5; i++)
    {
        if ((strcmp(livros[i].titulo, busca)) == 0)
        {
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n\n", livros[i].ano);
        }        
    }

    return 0;
}
