#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Endereco {
	char rua[50];
	int numero;
		
	};
struct Pessoa {
	char nome[16];
	int idade;
	struct Endereco endereco;
} pessoa;

int main () {
	
	
	printf("Digite o nome da pessoa:\n");
	scanf("%16[^\n]", &pessoa.nome);
	
	printf("Digite a idade da pessoa:\n");
	scanf("%d", &pessoa.idade);

	fflush(stdin);
	printf("Digite a nome da rua da pessoa:\n");
	scanf("%50[^\n]", &pessoa.endereco.rua);
		
	printf("Digite o numero rua da pessoa:\n");
	scanf("%d", &pessoa.endereco.numero);
	
	system("cls");
	
	printf("Nome: %s\n", pessoa.nome);
	printf("Idade: %d\n", pessoa.idade);
	printf("Endereco: %s, %d", pessoa.endereco.rua, pessoa.endereco.numero);    
}