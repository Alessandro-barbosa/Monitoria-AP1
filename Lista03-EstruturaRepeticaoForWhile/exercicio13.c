#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 30;
    while (i >= 1)
    {
        if(i % 4 == 0)
            printf("[%d] ", i);
        else
            printf("%d ", i);
        i--;
    }
    
    return 0;
}
