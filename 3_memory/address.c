#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;
    // printf("%p\n", p);
    // printf("%i\n", *p);
    char *s = "HI!";
    char *c = &s[0];
    char *p = c;
    printf("%p\n", s);
    printf("%p\n", p);
}