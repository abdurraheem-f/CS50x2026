#include <cs50.h>
#include <stdio.h>
void print_column (int height);
int main()
{
    int height = get_int("Height: \n");
    print_column(height);

}
void print_column (int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("*\n");

    }
}
