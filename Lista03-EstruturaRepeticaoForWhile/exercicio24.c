#include <stdio.h>
#define tam 7

int main(int argc, char const *argv[])
{
    float peso = 0, altura = 0, mediaAltura = 0;
    int i = 0, contadorAcima90 = 0, contadorMenos50Altura160 = 0;
    int contadorAlturaAcima190Peso100 = 0;
    while (i < tam){            
        printf("Digite seu peso: ");
        scanf("%f", &peso);
        printf("Digite sua altura em cm: ");
        scanf("%f", &altura );

        if(peso > 90)
            contadorAcima90++;
        if(peso < 50 && altura < 160){
            contadorMenos50Altura160++;
        }
        if(altura > 190 && peso > 100)
            contadorAlturaAcima190Peso100++;        
        mediaAltura += altura;   
        i++;     
    }
    mediaAltura = mediaAltura / tam;

        printf("\n\nPessoas acima de 90kg: %d\n", contadorAcima90);
        printf("Pessoas com menos de 50kg com menos de 150cm de altura: %d\n", contadorMenos50Altura160);
        printf("Pessoas acima de 190 com mais de 100kg: %d\n", contadorAlturaAcima190Peso100);
        printf("Altura media: %.2fcm", mediaAltura);


    return 0;
}
