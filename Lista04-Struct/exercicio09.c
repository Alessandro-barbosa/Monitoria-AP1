#include <stdio.h>

int main() {
    float real1, imag1, real2, imag2;
    float soma_real, soma_imag, sub_real, sub_imag;

    printf("Digite o primeiro numero complexo:\n");
    printf("Parte real: ");
    scanf("%f", &real1);
    printf("Parte imaginaria: ");
    scanf("%f", &imag1);
    
    printf("\nDigite o segundo numero complexo:\n");
    printf("Parte real: ");
    scanf("%f", &real2);
    printf("Parte imaginaria: ");
    scanf("%f", &imag2);
    
    soma_real = real1 + real2;
    soma_imag = imag1 + imag2;
    sub_real = real1 - real2;
    sub_imag = imag1 - imag2;

    printf("\nSoma: %.2f + %.2fi\n", soma_real, soma_imag);
    printf("Subtração: %.2f + %.2fi\n", sub_real, sub_imag);

    return 0;
}
