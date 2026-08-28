#include <cs50.h>
#include <stdio.h>
int add (int x, int y);
int main ()
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    printf("X+Y= %i\n", add(x, y));
}

int add(int x, int y)  //return values inside the braces called agruments
{
    return x+y;
}
