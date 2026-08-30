#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

const int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_points(string player); // inside the braces we write the parameter
int main()
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");

    int score1 = compute_points(player1);
    int score2 = compute_points(player2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_points(string player)
{
    int score = 0;
    for (int i = 0; player[i] != '\0';
         i++) // loop for every char no need to strlen as i dont use <string.h>
    {
        char temp_char =
            toupper(player[i]); // convert lower to upper in a variable called temporary variable
        if (isalpha(temp_char)) // to make sure is a letter not just a char & ? * and so to ignore
        {
            int char_index =
                temp_char - 65; // make a var called char_index and keep in it char in word - 65
            score += POINTS[char_index]; // add value of index of POINTs to score
        }
    }

    return score;
}
