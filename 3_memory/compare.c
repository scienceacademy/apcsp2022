#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char *s = get_string("s: ");
    //char *t = get_string("t: ");
    char *t = s;
    if (s == t)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}