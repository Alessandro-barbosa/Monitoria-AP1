#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1 = 0, num2 = 0, total = 0;
    int a = 0;
    char operacao;
    printf("primeiro numero: ");
    scanf("%f", &num1);
    printf("segundo numero: ");
    scanf("%f", &num2);
    printf("Operacao que deseja realizar: ");
    fflush(stdin);
    scanf("%c", &operacao);

    switch (operacao)
    {
    case 43:
        total = num1 + num2;
        break;
    case 45:
        total = num1 - num2;
        break;
    case 42:
        total = num1 * num2;    
        break;
    case 47:
        if(num2 == 0){
            printf("erro divisao por zero!!");
            a = 1;            
        }
        else{
            total = num1 / num2;        
        }
        break;
    default:
        printf("Nenhuma operacao escolhida!\n\n");
        printf("Encerrando programa!");
        a = 1;
        break;
    }
    if(a == 0){
        printf("Resultado: %.2f", total);
    }

    return 0;
}
