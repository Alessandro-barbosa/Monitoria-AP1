#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 1
typedef struct dataDeNascimento{
    int dia;
    int mes;
    int ano;
}dataDeNascimento;
typedef struct Funcionario
{
    char nome[100];
    int idade;
    char sexo;
    char cpf[12];
    dataDeNascimento dataDeNascimento;
    int codigoSetor;
    char cargo[30];
    float salario;
}Funcionario;

int main(int argc, char const *argv[]){        
    Funcionario f[tam];
    char fe = 'f';
    char ma = 'm';
    int i = 0;
    while(i < tam){
        printf("Nome funcionario: ");
        scanf("%100[^\n]", &f[i].nome);
        fflush(stdin);
        printf("Sexo: ");
        scanf("%c", &f[i].sexo);        
        f[i].sexo = tolower(f[i].sexo);
        fflush(stdin);
        printf("Idade: ");
        scanf("%d", &f[i].idade);
    
        fflush(stdin);
        printf("CPF <11 Digitos sem ponto>: ");
        scanf("%11[^\n]", &f[i].cpf);
        printf("Data de nascimento:\n");
        printf("Dia: ");
        scanf("%d", &f[i].dataDeNascimento.dia);        
        printf("Mes: ");
        scanf("%d", &f[i].dataDeNascimento.mes);        
        printf("Ano: ");
        scanf("%d", &f[i].dataDeNascimento.ano);        
        printf("Codigo do setor: ");
        scanf("%d", &f[i].codigoSetor);
        fflush(stdin);
        printf("Cargo que ocupa: ");        
        scanf("%30[^\n]", &f[i].cargo);        
        printf("Salario: ");
        scanf("%f", &f[i].salario);
        fflush(stdin);
        printf("\n");
        i++;
    }
    for (int i = 0; i < tam; i++){
        printf("Nome Funcionario: %s\n", f[i].nome);
        printf("Sexo: %c\n", f[i].sexo);
        printf("Idade: %d\n", f[i].idade);
        printf("Cpf: %s\n", f[i].cpf);
        printf("Data de nascimento: %d/%d/%d\n", f[i].dataDeNascimento.dia, f[i].dataDeNascimento.mes, f[i].dataDeNascimento.ano);
        printf("Codigo do setor: %d\n", f[i].codigoSetor);
        printf("Cargo: %s\n", f[i].cargo);
        printf("Salario: ");
        printf("%.2f", f[i].salario);
        printf("\n");
        
    }
    
    return 0;
}
