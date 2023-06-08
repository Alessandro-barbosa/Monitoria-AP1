#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1

typedef struct endereco{
    char rua[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    int CEP;
}ENDERECO;

typedef struct cadastro{
    char nome[50];
    ENDERECO endereco;
    float salario;
    int identidade;
    char cpf[11];
    char estadoCivil[20];
    int telefone;
    int idade;
    char sexo;
}CADASTRO;

void cadastrarPessoa(CADASTRO *c){
    for (int i = 0; i < MAX; i++){
        printf("Nome: ");
        scanf(" %50[^\n]", c[i].nome);
        printf("Identidade: ");
        scanf("%d", &c[i].identidade);
        printf("Telefone: ");
        scanf("%d", &c[i].telefone);
        printf("Cpf: ");
        scanf(" %11[^\n]", c[i].cpf);
        printf("Idade: ");
        scanf("%d", &c[i].idade);
        printf("Salario: ");
        scanf("%f", &c[i].salario);
        printf("Estado Civil: ");
        scanf(" %20[^\n]", c[i].estadoCivil);
        printf("Sexo: ");
        scanf(" %c", &c[i].sexo);
        c[i].sexo = toupper(c[i].sexo);
        printf("-Endereco-\n");
        printf("Rua: ");
        scanf(" %50[^\n]", c[i].endereco.rua);
        printf("Bairro: ");
        scanf(" %50[^\n]", c[i].endereco.bairro);
        printf("Cidade: ");
        scanf(" %50[^\n]", c[i].endereco.cidade);
        printf("Estado: ");
        scanf(" %50[^\n]", c[i].endereco.estado);
        printf("Cep: ");
        scanf("%d", &c[i].endereco.CEP);
        printf("\n");
        getchar();
    }
}
void mostrarHomens(CADASTRO *c){
    printf("\n\nMostrando os dados de todos os homens:\n");
    for (int i = 0; i < MAX; i++){
        if(c[i].sexo == 'M'){
            printf("\n==============================================\n");    
            printf("Nome: %s\n", c[i].nome);    
            printf("Identidade: %d\n", c[i].identidade);
            printf("CPF: %s\n", c[i].cpf);
            printf("Salário: R$ %.2f\n", c[i].salario);
            printf("Estado Civil: %s\n", c[i].estadoCivil);
            printf("Sexo: %c\n", c[i].sexo);
            printf("Telefone: %d\n", c[i].telefone);            
            printf("Idade: %d\n", c[i].idade);
            printf("-Endereço-\n");
            printf("Rua: %s\n", c[i].endereco.rua);
            printf("Bairro: %s\n", c[i].endereco.bairro);
            printf("Cidade: %s\n", c[i].endereco.cidade);
            printf("Estado: %s\n", c[i].endereco.estado);
            printf("CEP: %d\n", c[i].endereco.CEP);         
        }
    }
}

void SalarioMaiorque100(CADASTRO *c){
    printf("\n\nNome das Pessoas com salario maior que 1000:\n\n");
    for (int i = 0; i < MAX; i++){
        if (c[i].salario > 1000)
            printf("Nome: %s\n", c[i].nome);
    }
}
void maiorIdade(CADASTRO *c){
    printf("\n\nMostrando pessoa com a maior idade:\n\n");
    int maiorIdade = 0;
    char nome[50];
    for (int i = 0; i < MAX; i++){
        if(c[i].idade > maiorIdade){
        maiorIdade = c[i].idade;    
        strcpy(nome, c[i].nome);
        }
    }
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", maiorIdade);    
}
void encontrarIdentidade(int identidade, CADASTRO *c){    
 int achouIdentidade = 0;
    for (int i = 0; i < MAX; i++) {
        if (identidade == c[i].identidade) {
            achouIdentidade = 1;
            printf("\nMostrando dados do cliente com identidade %d:\n", c[i].identidade);
            printf("--------------------------------------------------\n");
            printf("Nome: %s\n", c[i].nome);
            printf("CPF: %s\n", c[i].cpf);
            printf("Idade: %d\n", c[i].idade);
            printf("Sexo: %c\n", c[i].sexo);
            printf("Estado Civil: %s\n", c[i].estadoCivil);
            printf("Telefone: %d\n", c[i].telefone);
            printf("Salario: %.2f\n", c[i].salario);
            printf("Endereco: \n");
            printf("Rua: %s\n", c[i].endereco.rua);
            printf("Bairro: %s\n", c[i].endereco.bairro);
            printf("Cidade: %s\n", c[i].endereco.cidade);
            printf("Estado: %s\n", c[i].endereco.estado);
            printf("CEP: %d\n", c[i].endereco.CEP);
            printf("--------------------------------------------------\n");
        }        
    }
    printf("\n");
    if (achouIdentidade == 0) {
        printf("Nao foi achada identidade com esse numero!\n");
    }                    
}
int main(){
    CADASTRO c[MAX];
    cadastrarPessoa(&c);    
    mostrarHomens(&c);
    SalarioMaiorque100(&c);
    maiorIdade(&c);
    int valor;
    printf("Insira um valor para pesquisar a identidade: ");
    scanf("%d", &valor);
    encontrarIdentidade(valor, &c);
    return 0;
}
