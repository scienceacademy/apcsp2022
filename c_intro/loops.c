#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int counter = 0;
    while (counter < 5)
    {
        printf("hello\n");
        counter += 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("hello\n");
    }
}