#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("x + y = %i\n", x + y);

    if (x > y)
    {
        printf("x is bigger\n");
    }
    else if (x < y)
    {
        printf("x is smaller\n");
    }
    else if (x == y)
    {
        printf("they're the same\n");
    }
}