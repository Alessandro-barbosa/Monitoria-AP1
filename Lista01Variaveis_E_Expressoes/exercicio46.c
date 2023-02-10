#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, um, dois, tres, numeroInvertido;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &numero);
    printf("Numeor lido: %d\n", numero);
    um = numero % 10;
    numero = numero / 10;
    dois = numero % 10;
    numero = numero / 10;
    tres = numero % 10;
    numeroInvertido = um;
    numeroInvertido = numeroInvertido*10 + dois;
    numeroInvertido = numeroInvertido*10 + tres;
    printf("%d",numeroInvertido);
    return 0;
}
