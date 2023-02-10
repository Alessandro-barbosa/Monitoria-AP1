#include <stdio.h>

int main(int argc, char const *argv[])
{
    float metros, jardas;
    printf("Digite o valor em metros: ");
    scanf("%f", &metros);
    jardas = metros/0.9144;
    printf("O valor em jardas eh: %.3f", jardas);
    return 0;
}
