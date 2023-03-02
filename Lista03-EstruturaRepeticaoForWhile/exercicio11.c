#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 100;
    while (i >= 0)
    {
        printf("%d ", i);
        i -= 5;
    }
    printf("Acabou!");
    
    return 0;
}
