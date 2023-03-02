#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 100; i >= 0; i-= 10)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("\nAcabou!");
    
    return 0;
}
