#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario, novoSalario, aumento = 0.25;
    printf("Insira o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Porcentagem do aumento: %.2f\n", aumento*100);
    novoSalario = salario + (salario * aumento);
    printf("Novo salario: %.2f Reais", novoSalario);
    return 0;
}
