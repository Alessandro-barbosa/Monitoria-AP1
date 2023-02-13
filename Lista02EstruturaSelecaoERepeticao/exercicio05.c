#include <stdio.h>

int main(int argc, char const *argv[])
{
    float ladoA = 0, ladoB = 0, ladoC = 0, valorAbsoluto = 0;
    printf("Lado A: ");
    scanf("%f", &ladoA);
    printf("Lado B: ");
    scanf("%f", &ladoB);
    printf("Lado C: ");
    scanf("%f", &ladoC);
    if(((ladoA + ladoB) > ladoC) && ((ladoA + ladoC) > ladoB) && ((ladoC + ladoB) > ladoA)){
        if (ladoA == ladoB && ladoB == ladoC){
            printf("Triangulo Equilatero 3 lados iguais!");
        }
        else if(ladoA == ladoB || ladoB == ladoC || ladoC == ladoA){
            printf("Triangulo Isosceles 2 lados iguais");
        }
        else{
            printf("Triangulo Escaleno 3 lados diferentes: ");
        }
    }
    else{
        printf("Os lados nao formam um triangulo!");
    }
    
    return 0;
}
