#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMPROMISSOS 2
#define MAX_NOME 60

typedef struct data
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct compromisso
{
    char nome[MAX_NOME];
    Data data;
} Compromisso;

void ler_data(Data *d)
{
    printf("Digite o dia: ");
    scanf("%d", &d->dia);
    printf("Digite o mes: ");
    scanf("%d", &d->mes);
    printf("Digite o ano: ");
    scanf("%d", &d->ano);
}

void imprimir_compromisso(Compromisso c)
{
    printf("%s - %02d/%02d/%04d\n", c.nome, c.data.dia, c.data.mes, c.data.ano);
}

int main()
{
    Compromisso agenda[MAX_COMPROMISSOS];
    int i, mes, ano;

    for (i = 0; i < MAX_COMPROMISSOS; i++)
    {
        printf("Digite o nome do compromisso %d: ", i + 1);
        scanf(" %[^\n]s", agenda[i].nome);
        ler_data(&agenda[i].data);
    }

    do
    {
        printf("\nDigite o mes e o ano dos compromissos a serem exibidos (M A): ");
        scanf("%d %d", &mes, &ano);

        if (mes == 0)
        {
            break;
        }

        printf("\nCompromissos de %02d/%04d:\n", mes, ano);
        for (i = 0; i < MAX_COMPROMISSOS; i++)
        {
            if (agenda[i].data.mes == mes && agenda[i].data.ano == ano)
            {
                imprimir_compromisso(agenda[i]);
            }
        }
    } while (mes != 0);

    return 0;
}
