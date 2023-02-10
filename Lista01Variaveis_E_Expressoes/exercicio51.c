#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x, y, distancia;
    printf("Coordenada x: ");
    scanf("%f", &x);
    printf("Coordenada y: ");
    scanf("%f", &y);
    distancia = sqrt(pow((x-0), 2) + pow((y - 0), 2));
    printf("Distancia dos pontos da origem: %.2f", distancia);
    return 0;
}
