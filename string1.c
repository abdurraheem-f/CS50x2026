#include <cs50.h>
#include <stdio.h>
int main ()
{
    // any string is array n+1 where n is the length and n+1 is (nul = \0)
    string s = "HI!";
    string t = "BYE!";

    // to add the two arrays or strings
    string words [2];
    words [0]= "HI!";
    words [1]= "BYE!";
    printf("%c%c\n%c%c%c\n", words[0][0], words[0][1], words[1][0], words[1][1], words[1][2]);
}
