#include <stdio.h>
#define tam 1999
int main(int argc, char const *argv[])
{
    for (int i = 1000; i <= tam; i++)
    {
        if (i % 11 == 5){
            printf("%d ", i);
        }        
    }    
    return 0;
}
