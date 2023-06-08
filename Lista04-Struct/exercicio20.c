#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct ingredientes{
    char nome[25];
    int qtd;
} INGREDIENTES;

typedef struct receitas{
    char nome[25];
    int qtd_ingredientes;
    INGREDIENTES *ingredientes;
} RECEITAS;

void preencherReceitas(RECEITAS *r){
    for (int i = 0; i < MAX; i++){
        printf("Nome da receita %d: ", i+1);
        scanf("%25[^\n]", r[i].nome);
        printf("Quantidade de ingredientes: ");                
        scanf("%d", &r[i].qtd_ingredientes);  
        getchar();

        r[i].ingredientes = (INGREDIENTES*) malloc(r[i].qtd_ingredientes * sizeof(INGREDIENTES));
        for (int j = 0; j < r[i].qtd_ingredientes; j++){
            printf("Ingrediente %d\n", j+1);
            printf("Nome: ");
            scanf("%25[^\n]", r[i].ingredientes[j].nome);            
            printf("Quantidade do ingrediente: ");            
            scanf("%d", &r[i].ingredientes[j].qtd);
            getchar();
        }        
    }    
}
void procurarReceita(char *nome, RECEITAS *r){    
    int achouReceita = 0;
    for (int i = 0; i < MAX; i++){
        if (strcmp(nome, r[i].nome) == 0){
            achouReceita = 1;
            printf("\nReceita de %s:\n", r[i].nome);
            printf("\n--Ingredientes--\n");
            for (int j = 0; j < r[i].qtd_ingredientes; j++){    
                printf("Nome: %s\n", r[i].ingredientes[j].nome);
                printf("Quantidade: %d\n", r[i].ingredientes[j].qtd);
            }            
        }        
    }
    printf("\n");
    if (achouReceita == 0)
        printf("Nao foi achado uma receita com esse nome!\n");                    
}

int main(){
    RECEITAS r[MAX];
    char nome_busca[25];
    preencherReceitas(&r);
    int vazio;
    do{
        printf("Nome da receita para busca: ");
        int vazio = scanf("%25[^\n]", &nome_busca);  
        getchar();
        if (vazio == 0){
            printf("Encerrando programa!");
            return 0;
        }
        procurarReceita(nome_busca, &r);
    } while (vazio != 0);            
    return 0;
}