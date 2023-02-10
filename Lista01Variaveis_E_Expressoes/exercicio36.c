#include <stdio.h>

int main(int argc, char const *argv[])
{
    float altura, raio, volume;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    volume = 3.141592 * (raio*raio) * altura;
    printf("Volume do cilindro: %.2f metros3", volume);
    return 0;
}
