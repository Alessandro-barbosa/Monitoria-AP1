#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, aux;
    printf("Digite um numero com quatro digitos: ");
    scanf("%d", &num);
    aux = num/1000;
    printf("%d\n", aux);
    num = num - aux * 1000;
    aux = num/100;
    printf("%d\n", aux);
    num = num - aux * 100;
    aux = num/10;
    printf("%d\n", aux);
    num = num - aux * 10;
    aux = num;
    printf("%d\n", aux);        
    return 0;
}
