#include <stdio.h>
#define tam 40
int main(int argc, char const *argv[])
{
    for (int i = 0; i <= tam; i += 5)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("Acabou!");
    
    return 0;
}
