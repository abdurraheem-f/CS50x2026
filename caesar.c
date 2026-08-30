#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if (argc != 2) // count must be 2 the key and programme name
    {
        printf("Usage: ./caesar key\n");
        return 1; // prog end with fault
    }
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
#include <ctype.h>        if(! isdigit(argv[1][i])) // make sure the key is number
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    printf("Success! Your key is %s\n", argv[1]); // agrv[1] is the key
    int key = atoi(argv[1]);                      // to change key fron ascii to integer
    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");
    for (int i = 0; plaintext[i] != 0; i++) // loop for go through every letter in the word
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
    return 0;
}
