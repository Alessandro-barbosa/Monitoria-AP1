#include <stdio.h>

int main(int argc, char const *argv[])
{
    float importancia = 780000, p1,p2,p3;
    printf("Valor da importancia %.2f\n", importancia);
    p1 = importancia * 0.46;
    p2 = importancia * 0.32;
    p3 = importancia * 0.22;
    printf("Primeiro ganhador recebeu: %.2f\n", p1);
    printf("segundo ganhador recebeu: %.2f\n", p2);
    printf("terceiro ganhador recebeu: %.2f\n", p3);
    return 0;
}