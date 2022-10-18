#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        // rand() % range + start
        int x = rand() % 10 + 1;
        printf("%i ", x);
    }
    printf("\n");
}