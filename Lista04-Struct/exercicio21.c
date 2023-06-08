#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct filmes{
    char nome[50];
    int ano;
    int duracao;
}FILMES;

typedef struct diretores{
    char nome[20];
    int qtd_filmes;
    FILMES *filmes;
}DIRETORES;

void preencherDiretores(DIRETORES *d){
    for (int i = 0; i < MAX; i++){
        printf("Nome %d diretor: ", i+1);
        scanf("%20[^\n]", d[i].nome);
        printf("quantidade de filmes: ");
        scanf("%d", &d[i].qtd_filmes);
        getchar();
        d[i].filmes = (FILMES*) malloc(d[i].qtd_filmes * sizeof(FILMES));
        for (int j = 0; j < d[i].qtd_filmes; j++){
            printf("Nome do %d filme: ", j+1);
            scanf("%50[^\n]", d[i].filmes[j].nome);
            printf("Ano do filme: ");
            scanf("%d", &d[i].filmes[j].ano);
            printf("Duracao do filme em minutos: ");
            scanf("%d", &d[i].filmes[j].duracao);
            getchar();
        }
    }
}
void procurarDiretor(char *nome, DIRETORES *d){    
    int achouDiretor = 0;
    for (int i = 0; i < MAX; i++){
        if (strcmp(nome, d[i].nome) == 0){
            achouDiretor = 1;
            printf("\nMostrando filmes do diretor %s:\n", d[i].nome);            
            for (int j = 0; j < d[i].qtd_filmes; j++){    
                printf("Nome: %s\n", d[i].filmes[j].nome);
                printf("Ano: %d\n", d[i].filmes[j].ano);
                printf("Duracao: %d\n\n", d[i].filmes[j].duracao);
            }            
        }        
    }
    printf("\n");
    if (achouDiretor == 0)
        printf("Nao foi achado diretor com esse nome!\n");                    
}

int main(){    
    DIRETORES d[MAX];
    char nome_busca[20];
    int vazio;
    preencherDiretores(&d);
    do{
        printf("Nome do diretor para busca: ");
        vazio = scanf("%20[^\n]", &nome_busca);  
        getchar();
        if (vazio == 0){
            printf("Encerrando programa!");
            return 0;
        }
        procurarDiretor(nome_busca, &d);
    } while (vazio != 0);   
    return 0;
}

