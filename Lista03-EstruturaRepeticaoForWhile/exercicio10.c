#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i <= 18)
    {
        printf("%d ", i);
        i += 3;
    }
    printf("Acabou!");
    
    return 0;
}
