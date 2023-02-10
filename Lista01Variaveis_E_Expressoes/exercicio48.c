#include <stdio.h>

int main(int argc, char const *argv[])
{
    float segundos = 0, minutos = 0, horas = 0, auxf = 0;
    printf("Digite os segundos: ");
    scanf("%f", &segundos);
    minutos = segundos / 60;
    horas = minutos / 60;
    minutos = horas * 100;
    int aux = minutos;
    aux = aux % 100;
    auxf = ((float)aux/100) * 60;
    minutos = auxf;
    segundos = minutos * 100;
    aux = segundos;
    aux = aux % 100;
    auxf = ((float)aux/100) * 60;
    segundos = auxf;
    printf("Horas: %d\n", (int) horas);
    printf("Minutos: %d\n",(int) minutos);
    printf("Segundos: %d\n", (int) segundos);
    return 0;
}