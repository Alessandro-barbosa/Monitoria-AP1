#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    printf("Insira um numero inteiro: ");
    scanf("%d", &num);
    printf("Tabuda do numero: %d\n", num);
    for (int i = 1 ; i <= 10; i++)
    {
        printf("%dx%d = %d\n", num, i, num*i);
    }
    
    return 0;
}
