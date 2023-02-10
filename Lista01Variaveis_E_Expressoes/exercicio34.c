#include <stdio.h>

int main(int argc, char const *argv[])
{   
    float raio, areaCirculo;
    printf("raio do circulo: ");
    scanf("%f", &raio);
    areaCirculo = (raio * raio) * 3.141592;
    printf("area do circulo: %f", areaCirculo);

    return 0;
}
