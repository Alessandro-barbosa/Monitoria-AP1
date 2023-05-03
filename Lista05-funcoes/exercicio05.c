#include <stdio.h>
#include <ctype.h>

float mediaAritmetica(float n1, float n2, float n3){
    return (n1+n2+n3)/ 3;
}
float mediaPonderada(float n1, float n2, float n3){
    return ((n1*5)+(n2*3)+(n3*2))/10;
}
int main(){
    char opcao;
    float n1, n2, n3;
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    getchar();
    printf("Para media aritmetica 'A' Ponderada 'B': ");
    scanf("%c", &opcao);
    float total = 0;
    opcao = toupper(opcao);
    switch (opcao)
    {
    case 'A':
        total = mediaAritmetica(n1,n2,n3);
        break;
    case 'B': 
        total = mediaPonderada(n1,n2,n3);
    default:
        break;
    }
    printf("Media: %.2f", total);
    return 0;
}
