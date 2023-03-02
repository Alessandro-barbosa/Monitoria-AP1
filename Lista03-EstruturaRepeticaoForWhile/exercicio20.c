#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int contadorCinco = 0, diviseisPorTres = 0, i = 0;
    printf("Numeros randomicos: ");
    while (i < 20)
    {                    
        int num = rand() % 10;
        if (num > 5)
            contadorCinco++;
        if (num  % 3 == 0 && num != 0)
            diviseisPorTres++;
        printf("%d ", num);
        i++;
    }

    printf("\nQuantidade de numeros acima de 5: %d", contadorCinco);
    printf("\nQuantidade de numeros diviseis por 3: %d", diviseisPorTres);
    
    
    return 0;
}
