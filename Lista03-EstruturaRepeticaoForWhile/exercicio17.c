#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 500, soma = 0;
    while(i >= 0){        
        soma += i;
        i -= 50;
    }
    printf("%d", soma);

    return 0;
}
