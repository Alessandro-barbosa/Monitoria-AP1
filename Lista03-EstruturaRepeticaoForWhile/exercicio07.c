#include <stdio.h>

int main()
{
    int p = 0, s = 1, soma = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", soma);
        soma = p + s;
        p = s;
        s = soma;        
    }
    
    return 0;
}
