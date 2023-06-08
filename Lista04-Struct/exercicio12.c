#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define BARALHO 52
#define JOGADORES 2
#define QTD_CARTAS 5

typedef struct MAOJOGADOR{
    int cartas[QTD_CARTAS];
    int naipes[QTD_CARTAS];
}mao;

void zerarMao(mao* maojogador){    
    for (int i = 0; i < QTD_CARTAS; i++){
        maojogador->cartas[i] = 0;
        maojogador->naipes[i] = 0;
    }    
}

int sortearCarta(int (*cartas)[13], int* naipes, int i){
    int linha = rand() % 4;    
    int coluna = rand() % 13;   
    int cartaSorteada = cartas[linha][coluna];
    while (cartaSorteada == 0){
        linha = rand() % 4;
        coluna = rand() % 13;   
        cartaSorteada = cartas[linha][coluna];        
    }    
    naipes[i] = linha;
    cartas[linha][coluna] = 0; 
    return cartaSorteada;
}

void distribuirCarta(mao* maojogador1, mao* maojogador2, int *cartas[13]){        
    for (int i = 0; i < QTD_CARTAS; i++){
        maojogador1->cartas[i] = sortearCarta(cartas, maojogador1->naipes, i);
        sleep(0.5);
        maojogador2->cartas[i] = sortearCarta(cartas, maojogador2->naipes, i);
    }
}
void verificarNaipe(int naipe){
    switch (naipe){
        case 0:
            printf("Paus ");
            break;
        case 1:
            printf("Ouro ");
            break;
        case 2:
            printf("Copa ");
            break;
        case 3:
            printf("Espada ");
            break;
    }
}
int main(){
    srand(time(NULL));
    int cartas[4][13] = {
                {1,2,3,4,5,6,7,8,9,10,11,12,13},  // [0] PAUS
                {1,2,3,4,5,6,7,8,9,10,11,12,13},  // [1] OURO
                {1,2,3,4,5,6,7,8,9,10,11,12,13},  // [2] COPA
                {1,2,3,4,5,6,7,8,9,10,11,12,13}   // [3] ESPADA
    };
    mao jogador1, jogador2;
    zerarMao(&jogador1);
    zerarMao(&jogador2);
    distribuirCarta(&jogador1, &jogador2, cartas); 
    printf("Cartas jogador 1: \n");
    for (int i = 0; i < QTD_CARTAS; i++){  
        printf("%d ", jogador1.cartas[i]);    
    }
    printf("\n");
    for (int i = 0; i < QTD_CARTAS; i++){
        verificarNaipe(jogador1.naipes[i]);
    }
    printf("\n");
    printf("Cartas jogador 2: \n");
    for (int i = 0; i < QTD_CARTAS; i++){  
        printf("%d ", jogador2.cartas[i]);                
    }
    printf("\n");
    for (int i = 0; i < QTD_CARTAS; i++){  
        verificarNaipe(jogador2.naipes[i]);
    }
    printf("\n");
    // char naipes[5][20] = {"Paus", "Ouro", "Copa", "Espada"};
    // for (int i = 0; i < (QTD_CARTAS - 1); i++){
    //     for (int j = 0; j < 13; j++){
    //         printf("%d ", cartas[i][j]);            
    //     }
    //     printf("%s ", naipes[i]);
    //     printf("\n");                
    // }  
    return 0;
}
