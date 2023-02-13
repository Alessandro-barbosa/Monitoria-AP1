#include <stdio.h>

int main(int argc, char const *argv[])
{
    float horasTralhadas, valorDaHora, totalSalario = 0;
    printf("Horas trabalhadas na semana: ");
    scanf("%f", &horasTralhadas);
    printf("Valor Da hora: ");
    scanf("%f", &valorDaHora);

    if(horasTralhadas <= 40){
        printf("Sem adicional\n");
        totalSalario = horasTralhadas * valorDaHora;
    }
    else if (horasTralhadas > 40 && horasTralhadas <= 60){
        printf("O funcionario tem o um bonus de 50%%\n");
        totalSalario = (horasTralhadas * valorDaHora) * 1.5;
    }
    else if(horasTralhadas > 60){
        printf("Bonus de 100%%\n");
        totalSalario = (horasTralhadas * valorDaHora) * 2.0;
    }
    printf("O salario eh de: %.2f", totalSalario);
    return 0;
}
