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
    // TODO: seed the rng using the given seed
    // if the given seed is 0, use time(0)

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