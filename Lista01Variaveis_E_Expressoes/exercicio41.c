#include <stdio.h>

int main(int argc, char const *argv[])
{
    float valorHora, horasTrabalhadas, adicional = 0.10, total = 0;
    printf("Digite o valor da hora: ");
    scanf("%f", &valorHora);
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    total = valorHora * horasTrabalhadas;
    total = total + (total * adicional);
    printf("Valor a ser pago ao funcionario: %.2f", total);

    return 0;
}
