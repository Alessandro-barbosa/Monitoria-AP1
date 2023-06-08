#include <stdio.h>
typedef struct Vetor{
    float x;
    float y;
    float z;
}Vetor;
    

int main(int argc, char const *argv[])
{

    Vetor vetor[2];
    float somaVetorX, somaVetorY, somaVetorZ;
    
    for (int i = 0; i < 2; i++)
    {
        printf("Vetor %d: \n\n", i+1);
        printf("Valor x: ");
        scanf("%f", &vetor[i].x);        
        printf("Valor y: ");
        scanf("%f", &vetor[i].y);
        printf("Valor z: ");
        scanf("%f", &vetor[i].z);
        printf("\n\n");

    }
    somaVetorX = vetor[0].x + vetor[1].x;
    somaVetorY = vetor[0].y + vetor[1].y;
    somaVetorZ = vetor[0].z + vetor[1].z;

    printf("Soma: %.2f", somaVetorX+somaVetorY+somaVetorZ);
    return 0;
}
