#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 6, soma = 0;
    while(i <= 100){
        soma += i;
        i += 2;
    }
    printf("Soma total dos termos: %d", soma);
    return 0;
}
