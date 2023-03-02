#include <stdio.h>

int main()
{   

    int num = 0;
    do{
        printf("Insira um numero: ");
        scanf("%d", &num);
        if (num < 0)
            printf("O numero precisa ser positivo!\n");
    } while (num < 0);

    printf("Contagem: ");
    for (int i = 0; i <= num; i++)
    {
        printf("%d, ", i);
    }
    printf("FIM!");
    
    return 0;
}
