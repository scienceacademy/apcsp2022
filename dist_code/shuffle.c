#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>
void shuffle();

int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int n = 10;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./shuffle <seed>\n");
        return 1;
    }
    int seed = atoi(argv[1]);

    // if arg is 0, randomize with time
    if (seed == 0)
    {
        srand(time(0));
    }
    // else use the given seed
    else
    {
        srand(seed);
    }

    shuffle();

    for (int i = 0;  i < n; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void shuffle()
{
    // TODO: Fisher-yates shuffle
}