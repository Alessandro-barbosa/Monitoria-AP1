#include <stdio.h>
#define tam 10

typedef struct aluno
{
    char nome[50];
    int matricula;
    float mediaFinal;
}Aluno;
void preencherVetor(int *vetor){
    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
    }    
}
int main(int argc, char const *argv[])
{
    Aluno a[tam];
    int i = 0;
    int aprovados[10];
    int reprovados[10];
    preencherVetor(aprovados);
    preencherVetor(reprovados);

    for (int i = 0; i < tam; i++){
        printf("Nome do aluno: ");
        scanf(" %50[^\n]", &a[i].nome);        
        printf("Matricula do aluno: ");
        scanf("%d", &a[i].matricula);        
        printf("Media Final do aluno: ");
        scanf("%f", &a[i].mediaFinal);
        if (a[i].mediaFinal >= 5){            
            aprovados[i] = 1;
        }
        else if(a[i].mediaFinal < 5){
            reprovados[i] = 2;
        }
    }
    printf("\n");
    printf("-Aprovados- \n\n");
    for (int i = 0; i < tam; i++){
        if (aprovados[i] == 1){
            printf("Nome: %s\n", a[i].nome);
            printf("matricula: %d\n", a[i].matricula);
            printf("media final: %.2f\n\n", a[i].mediaFinal);
        }            
    }
    printf("\n-Reprovados- \n\n");
    for (int i = 0; i < tam; i++){
        if (reprovados[i] == 2){
            printf("Nome: %s\n", a[i].nome);
            printf("matricula: %d\n", a[i].matricula);
            printf("media final: %.2f\n\n", a[i].mediaFinal);
        }
    }    
    return 0;
}
