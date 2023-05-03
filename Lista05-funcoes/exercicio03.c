#include <stdio.h>

int conversorSegundos(int h, int m, int s){
    int total = 0;
    total = (h * 3600) + (m * 60) + s;
    return total;
}
int main(){
    int h, m, s, total;
    printf("Horas: ");
    scanf("%d", &h);
    printf("Minutos: ");
    scanf("%d", &m);
    printf("Segundos: ");
    scanf("%d", &s);
    total = conversorSegundos(h,m,s);
    printf("Valor convertido para segundos: %d", total);

    return 0;
}
