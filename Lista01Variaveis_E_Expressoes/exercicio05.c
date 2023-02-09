#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Insira um numero float: ");
    scanf("%f", &x);
    x /= 5;
    printf("Quinta parte do numero inserido: %f", x);

    return 0;
}