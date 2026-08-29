#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main ()
{
    string name = get_string ("Before: ");
    printf("After: ");
    for (int i=0, length = strlen(name); i< length; i++)
    {
        if (name[i]>= 'a' && name[i]<= 'z')
        {
            printf("%c", name[i]-32);
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}

//--------------------------------
//#include <cs50.h>
//#include <stdio.h>
//#include <string.h>
//#include <type.h>
//int main ()
//{
    //string name = get_string ("Before: ");
    //printf("After: ");
    //for (int i=0, length = strlen(name); i< length; i++)
    //{
        //printf("%c", toupper(name[i]));
    //}
    //printf("\n");
//}
