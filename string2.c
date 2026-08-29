#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main ()
{
    string name = get_string ("Input: ");
    printf("Output: ");
    for (int i = 0; i <strlen(name); i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
}
