#include <stdio.h>
#define MAX 2
typedef struct produtos
{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;

} PRODUTOS;

void preencherProdutos(PRODUTOS *p)
{
    printf("Insira o produto(codigo nome preco quantidade)\n");
    for (int i = 0; i < MAX; i++)
    {

        scanf("%d %s %f %d", &p[i].codigo, p[i].nome, &p[i].preco, &p[i].quantidade);
    }
}
void procurarProdutos(int codigo, int qtd, PRODUTOS *p)
{
    do
    {
        int codigoAchado = 0;
        for (int i = 0; i < MAX; i++)
        {
            if (codigo == p[i].codigo)
            {
                codigoAchado = 1;
                if (qtd <= p[i].quantidade)
                {
                    p[i].quantidade -= qtd;
                    printf("Produto %s achado\n", p[i].nome);
                    printf("Novo estoque: %d\n", p[i].quantidade);
                }
                else
                    printf("Erro ao retirar a quantidade desejada do produto %s. Falta estoque!\n", p[i].nome);
            }
        }
        if (codigoAchado == 0)
        {
            printf("O codigo inserido nao existe em nossos produtos!\n");
        }
        printf("Produto a ser escolhido (Codigo quantidade)\n");
        scanf("%d %d", &codigo, &qtd);
    } while (codigo != 0);
}
int main(int argc, char const *argv[])
{
    PRODUTOS p[MAX];
    int codigo, qtd;
    preencherProdutos(&p);
    printf("Produto a ser escolhido (Codigo quantidade)\n");
    scanf("%d %d", &codigo, &qtd);
    procurarProdutos(codigo, qtd, &p);

    return 0;
}
