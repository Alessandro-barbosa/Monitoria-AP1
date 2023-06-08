#include <stdio.h>
#define tam 10
typedef struct Aluno
{
    int matricula;
    char nome[100];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float media;
}Aluno;
int main(int argc, char const *argv[])
{
    Aluno aluno[tam];    

    for (int i = 0; i < tam; i++)
    {
        printf("Nome: ");
        scanf("%100[^\n]", &aluno[i].nome);
        fflush(stdin);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Codigo da disciplina: ");
        scanf("%d", &aluno[i].codigoDisciplina);
        printf("Nota 1: ");
        scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &aluno[i].nota2);
        fflush(stdin);
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 * 2) / 3;
    }
    printf("\n\n---Mostrando alunos--- \n\n");
    for (int i = 0; i < tam; i++){
        printf("Nome: %s\n", aluno[i].nome);        
        printf("Media: %2.f\n\n", aluno[i].media);
    }
    
    return 0;
}
