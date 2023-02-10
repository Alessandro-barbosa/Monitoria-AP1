#include <stdio.h>

int main(int argc, char const *argv[])
{
    float jardas, metros;
    printf("Digite o valor em jardas: ");
    scanf("%f", &jardas);
    metros = jardas * 0.9144;
    printf("O valor em metros eh: %.2f", metros);
    return 0;
}
