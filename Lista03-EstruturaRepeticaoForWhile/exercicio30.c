#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    do
    {
        printf("%d ", i);
        i += 3;
    } while (i <= 30);
    printf("Acabou!");
    
    return 0;
}
