#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

void shuffle();

typedef struct
{
    int suit;
    int rank;
}
card;

card deck[52];

string ranks[] = {"", "A", "2", "3", "4", "5", "6",
                  "7", "8", "9", "10", "J", "Q", "K"};
string suits[] = {"♥", "♣", "♠", "♦"};

int main(void)
{
    srand(time(0));
    int n = 0;
    for (int s = 0; s < 4; s++)
    {
        for (int r = 1; r <= 13; r++)
        {
            deck[n].suit = s;
            deck[n].rank = r;
            n++;
        }
    }
    shuffle();

    printf("%s of %s\n", ranks[deck[0].rank], suits[deck[0].suit]);
}

void shuffle()
{
    int j;
    card tmp;
    for (int i = 51; i > 0; i--)
    {
        j = rand() % (i + 1);
        tmp = deck[j];
        deck[j] = deck[i];
        deck[i] = tmp;
    }
}