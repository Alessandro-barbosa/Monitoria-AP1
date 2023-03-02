#include <stdio.h>

int main()
{
    int valorInicial = 0, valorFinal = 0, incremento = 0;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valorInicial);

    printf("Digite o ultimo valor: ");
    scanf("%d", &valorFinal);

    printf("Digite o incremento valor: ");
    scanf("%d", &incremento);
    
    printf("Contagem: ");
    int i = valorInicial;

    if(valorInicial <= valorFinal){
        while (i <= valorFinal){
            printf("%d ", i);
            i += incremento;
        }
        printf("Acabou!");
    }
    else{             
        while (i >= valorFinal){
            printf("%d ", i);
            i -= incremento;
        }
        printf("Acabou!");
    }    

    return 0;
}
