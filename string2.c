#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main ()
{
    string name = get_string ("Input: ");
    printf("Output: ");
    ;
    // to avoid redoing the function as the name length wont be changed!
    // add values in initializing phase but length is identified with int before i
    for (int i =0  , length = strlen(name); i <length; i++)
    {
        printf("%c",name[i]);
    }
    printf("\n");
}
