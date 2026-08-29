#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main ()
{
    string name = get_string ("Input: ");
    printf("Output: ");
    int length = strlen(name);
    // to avoid redoing the function as the name length wont be changed!
    for (int i = 0; i <length; i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
}
