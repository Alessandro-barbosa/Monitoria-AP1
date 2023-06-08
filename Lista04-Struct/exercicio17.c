#include <stdio.h>

typedef struct eletrodomestico
{
    char nome[15];
    float potencia;    // em kW
    float tempo_ativo; // em horas por dia
} Eletrodomestico;

int main()
{
    int i, t;
    float consumo_total = 0.0;

    Eletrodomestico eletros[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº eletrodoméstico: ", i + 1);
        scanf("%s", eletros[i].nome);

        printf("Digite a potência do %dº eletrodoméstico (em kW): ", i + 1);
        scanf("%f", &eletros[i].potencia);

        printf("Digite o tempo ativo por dia do %dº eletrodoméstico (em horas): ", i + 1);
        scanf("%f", &eletros[i].tempo_ativo);
    }

    // Lê o tempo de uso dos aparelhos (em dias)
    printf("Digite o tempo de uso dos eletrodomésticos (em dias): ");
    scanf("%d", &t);
    for (i = 0; i < 5; i++)
    {
        float consumo_individual = eletros[i].potencia * eletros[i].tempo_ativo * t;
        consumo_total += consumo_individual;

        printf("O %s consome %.2f kW/h por dia, ou %.2f%% do consumo total.\n", eletros[i].nome, consumo_individual / t, consumo_individual / consumo_total * 100);
    }

    printf("O consumo total da casa é de %.2f kW/h por dia.\n", consumo_total / t);

    return 0;
}
