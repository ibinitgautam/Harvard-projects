#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    //initialize
    float dollar;
    int coins = 0;

    //input
    do
    {
        dollar = get_float("Change owed: ");
    }
    while (dollar < 0);

    //process
    int cents = round(dollar * 100);

    //count coins
    while (cents != 0)
    {
        if (cents >= 25)
        {
            coins += cents / 25;
            cents = cents % 25;

        }

        if (cents >= 10)
        {
            coins += cents / 10;
            cents = cents % 10;

        }

        if (cents >= 5)
        {
            coins += cents / 5;
            cents = cents % 5;

        }

        if (cents >= 1)
        {
            cents--;
            coins++;
        }

        //output
        printf("%i\n", coins);
    }
}