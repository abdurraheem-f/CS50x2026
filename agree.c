#include <cs50.h>
#include <stdio.h>
int main()
{
    char c = get_char("For Isreal Boycott, Do you agree?\n");
    if (c == 'y' || c == 'Y')
    {
        printf("You agreed!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You disagreed!\n");
    }
    else
    {
        printf("invalid input!");
    }

}
