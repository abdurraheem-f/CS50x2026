#include <cs50.h>
#include <stdio.h>
int main ()
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    int length1 = 0;
    int length2 = 0;

    while (player1[length1] != '\0')
    {
        length1++;
    }
    while (player2[length2] != '\0')
    {
        length2++;
    }

    if (length1>length2)
    {
        printf("Player 1 wins!\n");
    }
    else if (length1<length2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!");
    }
}
