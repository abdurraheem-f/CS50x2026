#include <cs50.h>
#include <stdio.h>
//void meow();
void meow(int times);
int main ()
{
    int times = get_int("Welcome to MEOW! enter no. of times: ");
    meow(times);
    //while (times >0)
    //{
        //meow();
        //times--;
    //}

    //int i = 0;
    //while (i<times)
    //{
        //meow();
        //times--;
    //}

    //for (int i = 0; i<times; i++)
    //{
        //meow();
    //}
}

void meow (int times)
{
    for (int i =0; i < times; i++)
    {
        printf("MEOW!\n");
    }
}
