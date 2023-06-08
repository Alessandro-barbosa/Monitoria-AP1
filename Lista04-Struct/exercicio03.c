#include <stdio.h>
#define tam 5
int main(int argc, char const *argv[])
{
    struct Aluno
    {
        char nome[64];
        int matricula;
        char curso[100];
    }Aluno;
    struct Aluno aluno[tam];
    for (int i = 0; i < tam; i++)
    {
        printf("Nome do %d aluno: ", (i+1));
        scanf("%64[^\n]", &aluno[i].nome);

        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);

        printf("Curso: ");
        scanf("%100[^\n]", &aluno[i].curso);
        fflush(stdin);
    }
        printf("\n\n");

    for (int i = 0; i < tam; i++)
    {
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Curso: %s", aluno[i].curso);
        printf("\n\n");                
    }
    

    return 0;
}
