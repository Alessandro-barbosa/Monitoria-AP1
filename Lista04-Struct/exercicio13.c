#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool validarDataNascimento(const char* dataNascimento) {
    if (strlen(dataNascimento) != 8)
        return false;
    for (int i = 0; i < strlen(dataNascimento); i++){
        if(isalpha(dataNascimento[i]) != 0)
            return false;
    }
    return true;
}

bool validarCEP(const char* cep) {    
    int tamanho = strlen(cep);
    if (tamanho != 8){
        printf("Cep maior ou menor que oito digitos!\n");
        return false;
    }
    for (int i = 0; i < sizeof(cep); i++){
        if (isalpha(cep[i]) != 0){
            printf("Possui letras no cep!\n");
            return false;
        }
    }    
    return true;
}
void mostrarDataNascimento(char *data){
    char dia[3];
    strncpy(dia, data, 2);
    dia[2] = '\0';
    char mes[3];
    strncpy(mes, data+2, 2);
    mes[2] = '\0';
    char ano[5];
    strncpy(ano, data+4, 4);
    ano[4] = '\0';
    sprintf(data, "%s/%s/%s", dia, mes, ano);
}

bool validarEmail(const char* email) {
    int flag = 0;
    int posFlag = 0;
    char *nome;
    char gmail[] = "gmail.com";
    char hotmail[] = "hotmail.com";    
    for (int i = 0; i < strlen(email); i++){
        if (email[i] == '@'){
            flag = 1;            
            posFlag = i;
            break;
        }
    }        
    if (flag == 0)
        return false;
    nome = (char*)malloc((strlen(email) - posFlag) * sizeof(char));
    strncpy(nome, &email[posFlag + 1], strlen(email) - posFlag);
    
    if (strcmp(nome, gmail) == 0 || strcmp(nome, hotmail) == 0) {
        free(nome);
        return true;
    }
    free(nome);
    return false;
}

int main() {
    char nome[100];
    char endereco[100];
    char dataNascimento[11];
    char cidade[100];
    char cep[10];
    char email[100];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu endereco: ");
    fgets(endereco, sizeof(endereco), stdin);

    printf("Digite sua data de nascimento (DD/MM/AAAA): ");
    fgets(dataNascimento, sizeof(dataNascimento), stdin);

    printf("Digite sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite seu CEP: ");
    fgets(cep, sizeof(cep), stdin);

    printf("Digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);

    //Removendo a quebra de linha ('\n') dos inputs
    nome[strcspn(nome, "\n")] = '\0';
    endereco[strcspn(endereco, "\n")] = '\0';
    dataNascimento[strcspn(dataNascimento, "\n")] = '\0';
    cidade[strcspn(cidade, "\n")] = '\0';
    cep[strcspn(cep, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';

    //Verificar se as informações são válidas
    bool infoValida = true;

    if (!validarDataNascimento(dataNascimento)) {
        printf("Data de nascimento invalida!\n");
        infoValida = false;
    }

    if (!validarCEP(cep)) {
        printf("CEP invalido!\n");
        infoValida = false;
    }

    if (!validarEmail(email)) {
        printf("E-mail invalido!\n");
        infoValida = false;
    }

    // Exibir as informações se todas forem válidas
    if (infoValida) {
        printf("\nInformacoes pessoais:\n");
        printf("Nome: %s\n", nome);
        printf("Cep: ");
        for (int i = 0; i < sizeof(cep); i++){
            printf("%c", cep[i]);
            if (i == 4)
                printf("-");                                
        }
        printf("\n");
        printf("Cidade: %s\n", cidade);
        printf("Endereco: %s\n", endereco);
        mostrarDataNascimento(&dataNascimento);
        printf("Data de nascimento: %s", dataNascimento);        
    }
}