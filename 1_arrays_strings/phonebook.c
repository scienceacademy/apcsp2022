#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];
    people[0].name = "Carter";
    people[0].number = "818-555-1234";
    people[1].name = "Jared";
    people[1].number = "818-555-1234";
    people[2].name = "Lisa";
    people[2].number = "818-555-1234";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(name, people[i].name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}