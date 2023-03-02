#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade = 0, contadorAluno = 0;
    float mediaIdade = 0;
    while (idade != 999)
    {           
        printf("Digite a idade: ");
        scanf("%d", &idade);
        if (idade != 999){
            contadorAluno++;        
            mediaIdade += idade;
        }
    }
    if(contadorAluno > 0)
        mediaIdade = mediaIdade / contadorAluno;

    printf("Quantidade de alunos: %d\n", contadorAluno);
    printf("Media da idade da turma: %.2f", mediaIdade);
    
    return 0;
}
