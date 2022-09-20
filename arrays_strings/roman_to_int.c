// write a function that takes a roman number string
// and returns the int value.
// I = 1, V = 5, X = 10, L = 50, C = 100
// You can assume the letters are in decreasing order.
#include <stdio.h>
#include <cs50.h>
#include <string.h>
int roman_to_int(string roman);

int main(void)
{
    printf("%i\n", roman_to_int("XVIII")); // 18
    printf("%i\n", roman_to_int("CXXII")); // 122
}

int roman_to_int(string roman)
{
    int total = 0;
    // your code here
    return total;
}