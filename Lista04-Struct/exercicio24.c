#include <stdio.h>
#include <string.h>
#define TAM 100
int metrica = 0;
typedef struct endereco{
    char rua[255];
    int numero;
    char complemento[255];
    char bairro[255];
    int cep;
    char cidade[255];
    char estado[255];
    char pais[255];
}endereco;

typedef struct numero{
    int ddd;
    int numero;
}numero;

typedef struct aniversario{
    int dia;
    int mes;
    int ano;
}dataAniversario;

typedef struct agendatelefone{
    char nome[255];
    char email[255];
    endereco endereco;
    numero telefone;
    dataAniversario aniversario;
    char observacao[1][255];        
}AGENDA;
void imprimirDados(int pos, AGENDA* agenda){               
        printf("Nome: %s\n", agenda[pos].nome);
        printf("Email: %s\n", agenda[pos].email);
        printf("Endereco:\n");
        printf("Rua: %s\n", agenda[pos].endereco.rua);
        printf("Numero: %d\n", agenda[pos].endereco.numero);
        printf("Complemento: %s\n", agenda[pos].endereco.complemento);
        printf("Bairro: %s\n", agenda[pos].endereco.bairro);
        printf("CEP: %d\n", agenda[pos].endereco.cep);
        printf("Cidade: %s\n", agenda[pos].endereco.cidade);
        printf("Estado: %s\n", agenda[pos].endereco.estado);
        printf("Pais: %s\n", agenda[pos].endereco.pais);        
        printf("Numero Telefone: \n");
        printf("DDD: (%d) %d\n", agenda[pos].telefone.ddd, agenda[pos].telefone.numero);        
        printf("Data de aniversário: \n");
        printf("%d/%d/%d\n", agenda[pos].aniversario.dia, agenda[pos].aniversario.mes, agenda[pos].aniversario.ano);
        printf("Anotação: \n");
        printf("%s\n", agenda[pos].observacao);
        printf("-------\n");
}
void getNome(AGENDA* agenda, char nome[]){    
    if(metrica == 0){
        printf("\n---Agenda vazia---\n");
    }
    for (int i = 0; i < TAM; i++){        
        int valor = strcmp(nome, agenda[i].nome);            
        if(valor == 0)
            imprimirDados(i, agenda);
    }    
}
void getMes(AGENDA* agenda, int mes){
    if(metrica == 0){
        printf("\n---Agenda vazia---\n");
    }
    for (int i = 0; i < metrica; i++){        
        if(mes == agenda[i].aniversario.mes)
            imprimirDados(i, agenda);
    }    
}
void getDiaMes(int dia, int mes, AGENDA* agenda){
    if(metrica == 0){
        printf("\n---Agenda vazia---\n");
    }
    for (int i = 0; i < metrica; i++){        
        if(dia == agenda[i].aniversario.dia && mes == agenda[i].aniversario.mes)
            imprimirDados(i, agenda);        
    }    
}
void inserirPessoa(AGENDA* agenda) {
    if (metrica == TAM){
        printf("\nErro ao inserir, agenda cheia!\n");
        return;
    }
    AGENDA a;
    printf("Nome: ");
    scanf(" %255[^\n]", a.nome);

    printf("Email: ");
    scanf("%s", a.email);
    printf("Endereco:\n");
    printf("Rua: ");
    scanf(" %255[^\n]", a.endereco.rua);
    printf("Numero: ");
    scanf("%d", &a.endereco.numero);
    printf("Complemento: ");
    scanf(" %255[^\n]", a.endereco.complemento);
    printf("Bairro: ");
    scanf(" %255[^\n]", a.endereco.bairro); 
    printf("CEP: ");
    scanf("%d", &a.endereco.cep);
    printf("Cidade: ");
    scanf(" %255[^\n]", a.endereco.cidade);
    printf("Estado: ");
    scanf(" %255[^\n]", a.endereco.estado);
    printf("Pais: ");
    scanf(" %255[^\n]", a.endereco.pais);
    printf("Numero Telefone:\n");
    printf("DDD: ");
    scanf("%d", &a.telefone.ddd);
    printf("Numero: ");
    scanf("%d", &a.telefone.numero);
    printf("Data de aniversário:\n");
    printf("Dia: ");
    scanf("%d", &a.aniversario.dia);
    printf("Mês: ");
    scanf("%d", &a.aniversario.mes);
    printf("Ano: ");
    scanf("%d", &a.aniversario.ano);
    printf("Anotacao: ");
    scanf(" %255[^\n]", a.observacao);
    int flag = 0;    
    if(metrica == 0){
        agenda[0] = a;
        metrica++;
    }    
    else{
        for (int i = 0; i < TAM; i++) {
            int valor = strcmp(a.nome, agenda[i].nome);
            if (valor == -1) {                
                flag = 1;
                for (int j = metrica; j >= i; j--){
                    agenda[j + 1] = agenda[j];
                }
                agenda[i] = a;                
            }
            break;
        }            
        if(flag == 0){
            agenda[metrica] = a;
        }
        metrica++;
    }
}
void removerPessoa(AGENDA *agenda) {   
    if (metrica == 0){
        printf("\nImpossivel remover, agenda está vazio!\n");
        return;
    }
    char nome[255];
    printf("Insira o nome da pessoa para retirar: ");
    fflush(stdin);
    scanf("%255[^\n]", nome);
    for (int i = 0; i < metrica; i++){
        int valor = strcmp(nome, agenda[i].nome);
        if(valor == 0){
            if(i < TAM-1)
            for (int j = i; j < metrica; j++){
                agenda[j] = agenda[j+1];
            }            
            metrica--;
        }
    }
}
void imprimeAgenda(AGENDA* agenda){    
    if(metrica == 0){
        printf("\nAgenda vazia!\n");
        return;
    }
    printf("------Mostrando nome, telefone, email------\n");
    for (int i = 0; i < metrica; i++){
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %d %d\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
        printf("email: %s\n", agenda[i].email);
        printf("------------\n");
    }    
}
void imprimeAgendaCompleta(AGENDA* agenda){
    if(metrica == 0){
        printf("\nAgenda vazia!\n");
        return;
    }
    printf("-----Mostrando dados completos-----\n");
    for (int i = 0; i < metrica; i++){
        imprimirDados(i, agenda);
    }
}
int View(){
    int opcao = 0;
    printf("<1> Inserir Pessoa\n");
    printf("<2> Remover Pessoa\n");
    printf("<3> Busca por nome\n");
    printf("<4> Mostrar pessoas por mes de aniversario\n");
    printf("<5> Mostrar pessoas por dia e mes\n");
    printf("<6> Mostrar nomes, telefones e email\n");
    printf("<7> Mostrar todos os dados\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    return opcao;
}
void menu(AGENDA* agenda, int opcao){
    switch (opcao){
        case 1:
            inserirPessoa(agenda);
            break;
        case 2:            
            removerPessoa(agenda);
           break;
        case 3:
        {
            char nome[255];
            printf("Nome para busca: ");
            fflush(stdin);
            scanf("%255[^\n]", nome);
            getNome(agenda, nome);
        }
        break;
        case 4:
        {
            int mes;
            printf("Insira o mes: ");
            scanf("%d", &mes);
            getMes(agenda, mes);
            break;
        }
        case 5:
        { 
            int dia, mes;
            printf("Insira o dia: ");
            scanf("%d", &dia);            
            printf("Insira o mes: ");
            scanf("%d", &mes);
            getDiaMes(dia, mes, agenda);
            break;
        }
        case 6:
            imprimeAgenda(agenda);
            break;
        case 7:
            imprimeAgendaCompleta(agenda);
            break;
        default:
            break;
    }
}

int main(){   
    AGENDA agenda[TAM];    
    while (1){
        int opcao = View();
        menu(&agenda, opcao);    
    }
    return 0;
}
