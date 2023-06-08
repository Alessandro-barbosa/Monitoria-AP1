#include <stdio.h>

#define MAX_VOOS 5
#define MAX_AEROPORTOS 5

typedef struct {
    int codigoOrigem;
    int codigoDestino;
} Voo;

typedef struct {
    int codigo;
    int voosSaida;
    int voosChegada;
} Aeroporto;

int main() {
    Voo voos[MAX_VOOS];
    Aeroporto aeroportos[MAX_AEROPORTOS];

    printf("Informe os voos:\n");
    for (int i = 0; i < MAX_VOOS; i++) {
        printf("Voo %d:\n", i + 1);
        printf("  Código de origem: ");
        scanf("%d", &voos[i].codigoOrigem);
        printf("  Código de destino: ");
        scanf("%d", &voos[i].codigoDestino);
    }

    for (int i = 0; i < MAX_AEROPORTOS; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].voosSaida = 0;
        aeroportos[i].voosChegada = 0;
    }

    for (int i = 0; i < MAX_VOOS; i++) {
        int codigoOrigem = voos[i].codigoOrigem;
        int codigoDestino = voos[i].codigoDestino;

        if (codigoOrigem >= 0 && codigoOrigem < MAX_AEROPORTOS) {
            aeroportos[codigoOrigem].voosSaida++;
        }

        if (codigoDestino >= 0 && codigoDestino < MAX_AEROPORTOS) {
            aeroportos[codigoDestino].voosChegada++;
        }
    }
        
    printf("\nRelatório de voos nos aeroportos:\n");
    for (int i = 0; i < MAX_AEROPORTOS; i++) {
        printf("Aeroporto %d:\n", aeroportos[i].codigo);
        printf("  Voos de saída: %d\n", aeroportos[i].voosSaida);
        printf("  Voos de chegada: %d\n", aeroportos[i].voosChegada);
    }

    return 0;
}
