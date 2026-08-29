#include <cs50.h>
#include <stdio.h>
int main()
{
    long number = get_long("Enter credit number: \n");

    // make a copy of number to break it
    long brnum = number;

    // count length of number
    int length = 0;

    // team 1 collected
    int coll_sum = 0;
    // team 2 multiplied
    int multi_sum = 0;

    bool multiply2 = false; // false is team 1 and true is team 2

    // find every last digit and count length of number

    while (brnum > 0) // loop continue till
    {
        int lastdigit = brnum % 10; // find last digit
        if (multiply2 == false)
        {
            coll_sum = coll_sum + lastdigit;
            multiply2 = true;
        }

        else
        {
            int post_multi = lastdigit * 2;
            multi_sum = multi_sum + (post_multi  (post_multi / 10); // collect the digits of the number as 12 is 3 not 12
            multiply2 = false;
        }

        brnum = brnum / 10; // to remove last digit
        length++;           // to count the length after each digit
    }

    // find the first two digit are less than 100
    // loop logic is to do % until number less than 100 stops
    long first2digit = number;
    while (first2digit >= 100)
    {
        first2digit = first2digit / 10;
    }

    int total_sum = coll_sum + multi_sum;
    if (total_sum % 10 != 0)
    {
        printf("INVALID\n");
    }

    else
    {
        if ((first2digit == 37 || first2digit == 34) && (length == 15))
        {
            printf("AMEX\n");
        }
        else if ((first2digit >= 51 && first2digit <= 55) && (length == 16))
        {
            printf("MASTERCARD\n");
        }
        else if ((first2digit / 10 == 4) && (length == 13 || length == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}
