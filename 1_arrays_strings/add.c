#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./add x y\n");
        return 1;
    }
    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%i\n", sum);
}