#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    int entrada = 1;
    float salario = 0, totalSalarioHomens = 0, totalSalarioMulheres = 0;
    char sexo;
    while (entrada == 1){
        printf("Salario: ");
        scanf("%f", &salario);
        printf("Sexo: ");        
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        if(sexo == 70){ // Comparação com base na tabela ascii Valor do numero == 'F'
            totalSalarioMulheres += salario;            
        }
        if(sexo == 77){ // Comparação com base na tabela ascii Valor do numero == 'M'
            totalSalarioHomens += salario;
        }        
        printf("\nContinuar? \nSIM <1>\nNAO <2>\nEntrada: ");        
        scanf("%d", &entrada);
        printf("\n");
    } 
    printf("Total Salario homens: %.2f\n", totalSalarioHomens);
    printf("Total salario mulheres: %.2f\n", totalSalarioMulheres);

    return 0;
}