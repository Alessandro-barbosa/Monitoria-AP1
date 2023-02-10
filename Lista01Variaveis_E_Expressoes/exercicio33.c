#include <stdio.h>

int main(int argc, char const *argv[])
{
    float lado, area;
    printf("Valor do lado de um quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("Area do quadrado: %.2f", area);

    return 0;
}