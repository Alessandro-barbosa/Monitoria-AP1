#include <stdio.h>
#define tam 5

struct Aluno
{
    char nome[64];
    int matricula;
    float nota[3];

}Aluno;
struct Notas
{
    float menorNota;
    char *nomeMenorNota;
    float maiorNota;
    char *nomeMaiorNota;
    float maiorPrimeira;
    char *nomeMaiorPrimeiraNota;
}Notas;
int main(int argc, char const *argv[])
{
    struct Aluno aluno[tam];
    struct Notas notas;
    notas.maiorNota = -1;
    notas.menorNota = 100;
    notas.maiorPrimeira = -1;
    for (int i = 0; i < tam; i++)
    {
        printf("Nome do aluno: ");
        scanf("%64[^\n]", &aluno[i].nome);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j+1);
            scanf("%f", &aluno[i].nota[j]);
        }        
        fflush(stdin);
    }
    for (int i = 0; i < tam; i++)
    {
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        float media = 0;
        for (int j = 0; j < 3; j++)
        {            
            media += aluno[i].nota[j];
            
            if (j == 0){
                if(notas.maiorPrimeira < aluno[i].nota[j]){
                    notas.maiorPrimeira = aluno[i].nota[j];
                    notas.nomeMaiorPrimeiraNota = &aluno[i].nome;
                }
            }            
        }
        media /= 3;
        if (media > notas.maiorNota){
            notas.maiorNota = media;
            notas.nomeMaiorNota = &aluno[i].nome;
        }
        if (media < notas.menorNota){
            notas.menorNota = media;
            notas.nomeMenorNota = &aluno[i].nome;
        }        
        if (media >= 6){
            printf("Aluno aprovado com nota: %.2f\n", media);
        }
        else
            printf("Aluno reprovado com nota: %.2f", media);        
    }
    printf("\n\n");    
    printf("Aluno %s com maior media valor: %.2f\n", notas.nomeMaiorNota, notas.maiorNota);
    printf("Aluno %s com menor media valor: %.2f\n", notas.nomeMenorNota, notas.menorNota);
    printf("Aluno %s com maior nota primeira prova valor %2.f\n", notas.nomeMaiorPrimeiraNota, notas.maiorPrimeira);
    return 0;
}