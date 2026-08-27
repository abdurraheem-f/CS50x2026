#include <cs50.h>
#include <stdio.h>
int main()
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    if (x>y)
    {
        printf("X is greater than Y\n");
    }
    else if (x<y)
    {
        printf("X is less than Y\n");
    }
    else
    {
        printf("X equals Y\n");
    }
}
