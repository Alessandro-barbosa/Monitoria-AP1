#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    float peso = 0, mediaPesoMulheres = 0, maiorPesoHomem = 0;
    char entradaSexo;
    int contadorMulheres = 0, contadorHomens = 0, contadorHomensAcima100 = 0;    

    for (int i = 0; i < 8; i++)
    {
        printf("Insira seu sexo <M> | <F>: ");
        fflush(stdin);
        scanf("%c", &entradaSexo);
        printf("Insira seu peso: ");
        scanf("%f", &peso);
        entradaSexo = toupper(entradaSexo);
        switch (entradaSexo){        
            case 'F':
                contadorMulheres++;
                if(contadorMulheres > 0)
                    mediaPesoMulheres += peso;
                break;
            case 'M':
                if (peso > maiorPesoHomem)
                    maiorPesoHomem = peso;
                if (peso > 100)
                    contadorHomensAcima100++;
                    break;
            default:
                break;
        }
    }
    
    if(contadorMulheres > 0)
        mediaPesoMulheres = mediaPesoMulheres/contadorMulheres;
    printf("\nQuantidade de mulheres cadastradas: %d\n", contadorMulheres);
    printf("Media peso das mulheres: %.2f\n", mediaPesoMulheres);
    printf("Maior peso homem: %.2f\n", maiorPesoHomem);
    printf("Homens com mais de 100kg: %d\n", contadorHomensAcima100);        

    return 0;
}
