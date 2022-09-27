#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // float x = get_float("x: ");
    // float y = get_float("y: ");
    // printf("x / y = %.50f\n", x / y);

    float money = get_float("Amount: ");
    int pennies = round(money * 100);
    printf("pennies: %i\n", pennies);
}
