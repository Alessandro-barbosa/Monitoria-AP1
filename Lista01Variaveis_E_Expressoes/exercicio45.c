#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a, charMinusculo;
    printf("Insira um caracter Maiusculo: ");
    scanf("%c", &a);
    charMinusculo = a + 32;
    printf("O caracter minusculo: %c", charMinusculo);    

    return 0;
}
