#include <stdio.h>
#define tam 4

int main(int argc, char const *argv[])
{
    int vetor1[tam], vetor2[tam], produtoEscalar = 0;
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
            printf("-Valores para o primeiro vetor-\n");
        else
            printf("-Valores para o segundo vetor-\n");        
        for (int j = 0; j < tam; j++)
        {
            printf("%d valor: ", j+1);
            if (i == 0)
                scanf("%d", &vetor1[j]);
            else
                scanf("%d", &vetor2[j]);
        }
    }
     for (int i = 0; i < tam; i++)
        {
            produtoEscalar += vetor1[i] * vetor2[i];            
        }
        printf("O produto escalar eh: %d", produtoEscalar);

    return 0;
}
