#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, media = 0, contadorMaiorDezoito = 0, contadorMenosCinco = 0, maiorIdade = 0;
    int idade = 0;
    while (i < 10){
        
        printf("Insira a sua idade: ");
        scanf("%d", &idade);

        while(idade < 0){
            printf("Idade negativa!\n");
            printf("Insira a sua idade: ");
            scanf("%d", &idade);
        }

        if(idade > maiorIdade)
            maiorIdade = idade;
        if (idade > 18 )
            contadorMaiorDezoito++;
        if(idade < 5)
            contadorMenosCinco++;
        media += idade;
        i++;
    }
    media = media / 10;
    
    printf("\nMaior idade %d\n", maiorIdade);
    printf("Pessoas com mais de Dezoito anos: %d\n", contadorMaiorDezoito);
    printf("Pessoas com menos de cinco anos: %d\n", contadorMenosCinco);
    printf("Media das idades do grupo: %d\n", media);
    return 0;
}
