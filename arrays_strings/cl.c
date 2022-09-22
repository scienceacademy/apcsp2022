#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc > 2)
    {
        printf("Usage: ./cl <name>\n");
        return 1;
    }
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}