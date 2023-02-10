#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, hipotenusa;
    printf("Digite o cateto a: ");
    scanf("%f", &a);
    printf("Digite o cateto b: ");
    scanf("%f", &b);
    hipotenusa = pow((a*a + b*b), 0.5);
    printf("Valor da hipotenusa: %f", hipotenusa);

    return 0;
}
