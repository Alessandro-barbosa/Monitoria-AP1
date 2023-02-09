#include <stdio.h>

int main(int argc, char const *argv[])
{
    float dist;
    printf("Distancia em milhas: ");
    scanf("%f", &dist);
    dist = dist * 1.61;
    printf("Distancia em quilometros: %.2f", dist);
    return 0;
}
