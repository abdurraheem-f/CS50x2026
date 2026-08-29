#include <cs50.h>
#include <stdio.h>
int main()
{
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    //q25, d10, n5, p1
    //calc quaters
    int quaters = change / 25;
    change = change % 25;

    //calc dimes
    int dimes = change / 10;
    change = change % 10;

    //calc nickels
    int nickels = change / 5;
    change = change % 5;

    //calc pennies
    int pennies = change;

    //calc changeowed
    int x = quaters + dimes + nickels + pennies;
    printf("%i\n", x);
}
