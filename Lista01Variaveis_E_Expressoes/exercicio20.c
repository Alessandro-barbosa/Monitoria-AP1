#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x;
    printf("Massa em quilogramas: ");
    scanf("%f", &x);
    x = x/0.45;
    printf("Massa em libras: %.2f", x);
    return 0;
}
