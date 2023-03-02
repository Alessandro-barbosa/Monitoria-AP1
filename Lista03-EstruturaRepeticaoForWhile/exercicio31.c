#include <stdio.h>

int main() {
    int idade, total_idades = 0, contadorIdade = 0, contador21 = 0;
    float media_idades;
    char continuar;

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        total_idades += idade;
        contadorIdade++;

        if (idade >= 21) {
            contador21++;
        }

        printf("Deseja continuar digitando dados? (s/n)");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    media_idades = (float) total_idades / contadorIdade;

    printf("Foram digitadas %d idades\n", contadorIdade);
    printf("A media das idades digitadas eh: %.2f\n", media_idades);
    printf("Existem %d pessoas com 21 anos ou mais\n", contador21);

    return 0;
}
