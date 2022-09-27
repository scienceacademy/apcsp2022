#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("Number between 1 and 10: ");
    }
    while (num < 1 || num > 10);

    for (int j = 0; j < num; j++)
    {
        for (int i = 0; i < num; i++)
        {
            printf("?");
        }
        printf("\n");
    }
}