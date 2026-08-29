#include <cs50.h>
#include <stdio.h>
float averge (int sum, int length);
int main()
{
    int sum = 0; // to avoid scoping
    int length = get_int("How many score? ");

    for (int i = 0; i < length; i++)
    {
        int score = get_int("score %i: ", i+1);
        sum += score;
    }
    averge (sum, length);

}

float averge (int sum, int length)
{
    if (length == 0) return 0.0; // to avoid divide on 0
    float final = (float) sum/length;
    printf("Averge is %f \n", final);
    return final;
}
