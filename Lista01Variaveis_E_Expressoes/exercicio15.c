#include <stdio.h>

int main(int argc, char const *argv[])
{
    float r;
    printf("Angulo em radianos: ");
    scanf("%f", &r);
    r = (r * 180)/3.14;
    printf("Angulo em graus: %.2f", r);
    return 0;
}
