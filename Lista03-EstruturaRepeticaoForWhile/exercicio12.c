#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0, i = 0;
    printf("Digite um valor: ");
    scanf("%d", &num);
    printf("Contagem: ");

    while (i <= num)
    {
        printf("%d ", i);
        i++;
    }
    printf("Acabou!");
    

    return 0;
}
