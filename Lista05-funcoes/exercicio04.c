#include <stdio.h>

void conversorData(int dia, int mes, int ano){
    char listaMeses[12][20] = {
        "janeiro",
        "fevereiro",
        "marco",
        "abril",
        "maio",
        "junho",
        "julho",
        "agosto",
        "setembro",
        "outubro",
        "novembro",
        "dezembro"
    };
    printf("%d de %s de %d", dia, listaMeses[mes-1], ano);    
}
int main(int argc, char const *argv[]){
    int dia, mes, ano;
    printf("Insira a data atual no formato dia/mes/ano\n");
    scanf("%d/%d/%d", &dia,&mes,&ano);
    conversorData(dia,mes,ano);

    return 0;
}
