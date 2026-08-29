#include <cs50.h>
#include <stdio.h>
int main ()
{
    int length = get_int("how many items? ");
    int array [length];
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        array[i]= get_int("Item %i: ", i+1);
        sum += array[i];
    }

    printf("Averge is %f \n", (float)sum/length);
}
