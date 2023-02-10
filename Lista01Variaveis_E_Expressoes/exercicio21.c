#include <stdio.h>

int main() {
    float libras, quilogramas;

    printf("Digite o valor da massa em libras: ");
    scanf("%f", &libras);

    quilogramas = libras * 0.45;

    printf("A massa em quilogramas eh: %.2f kg\n", quilogramas);

    return 0;
}
