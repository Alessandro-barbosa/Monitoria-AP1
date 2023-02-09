#include <stdio.h>

int main(int argc, char const *argv[])
{
    float vel;
    printf("Velocidade em km/h: ");
    scanf("%f", &vel);
    vel /= 3.6;
    printf("Velocidade em m/s: %.2f", vel);
    return 0;
}
