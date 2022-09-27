// Write a function to replace vowels with numbers
// a -> @, e -> 3, i -> 1, o -> 0
// Usage: ./l33t word
// * don't forget to check for cl errors
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error.\n");
        return 1;
    }
    string word = argv[1];
    for (int i = 0, l = strlen(word); i < l; i++)
    {
        switch(tolower(word[i]))
        {
            case 'a':
                word[i] = '@';
                break;
            case 'e':
                word[i] = '3';
                break;
            case 'i':
                word[i] = '1';
                break;
            case 'o':
                word[i] = '0';
                break;
        }
    }
    printf("%s\n", word);
}
