#include <cs50.h>
#include <stdio.h>
void string_length (string name);
int main ()
{
    string name = get_string("Name: ");
    string_length(name); // when call a function use the parameter

}
void string_length (string name)
{
    int length =0;
    while (name[length] != '\0')
    {
        length++;
    }
    printf("%i\n", length);
}
