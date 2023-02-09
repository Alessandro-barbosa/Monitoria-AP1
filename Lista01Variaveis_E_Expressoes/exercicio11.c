#include <stdio.h>
int main(int argc, char const *argv[])
{
    float vel;
    printf("Velocidade em m/s: ");
    scanf("%f", &vel);
    vel *= 3.6;
    printf("Velocidade m k/s: %.2f", vel);
    return 0;
}
