#include <stdio.h>

int main(int argc, char const *argv[])
{
    float g;
    printf("Angulo em graus: ");
    scanf("%f", &g);
    g = (g * 3.14)/180;
    printf("Angulo em radianos: %.2f", g);
    return 0;
}
