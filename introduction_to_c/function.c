#include <stdio.h>
void hello(int n);

int main(void)
{
    hello(3);
}

void hello(int n)
{
    for (int i=0; i < n; i++)
    {
        printf("hello\n");
    }
}