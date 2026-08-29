#include <cs50.h>
#include <stdio.h>
void string_length (string name);
int main ()
{
    string name = get_string("Name: ");
    string_length(name); // when call a function use the parameter

}
void string_length (string name)
//int string_length (string name) for return length and print it in main is good if want to use length
{
    int length =0;
    while (name[length] != '\0')
    {
        length++;
    }
    //return length; if we use int not void function
    printf("%i\n", length);
}
