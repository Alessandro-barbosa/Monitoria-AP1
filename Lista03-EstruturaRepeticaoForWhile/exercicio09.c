#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 10;
    while (i >= 3)
    {
        printf("%d ", i);
        i--;
    }
    printf("Acabou!");
    return 0;
}
