#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//global

//Points[7] = {1,2,3,4,5,8,10};
char point1[10] = {'a', 'l', 'n', 'o', 'u', 't', 's', 'r', 'i', 'e'};
char point2[2] = {'d', 'g'};
char point3[4] = {'p', 'b', 'c', 'm'};
char point4[5] = {'y', 'v', 'f', 'h', 'w'};                         //3+1+3+3+1+1+1+1
char point5 = 'k';
char point8[2] = {'x', 'j'};
char point10[2] = {'q', 'z'};



//initialize
int sum2 = 0, sum1 = 0;
int length, i;
string player1, player2;
char c1, c2;

//main function
int main()
{
    player1 = get_string("Player1: ");

    player2 = get_string("Player2: ");

    //-------------------------------player1---------------------------------//

    length = strlen(player1);

    //taking care for upper and lower case
    for (i = 0; i < length; i++)
    {
        char c = player1[i];

        if (isupper(c))
        {
            player1[i] = tolower(c);

        }
    }


    for (i = 0 ; i < length ; i++)
    {
        c1 = player1[i];

        for (int j = 0 ; j < 10 ; j++) //loop for point1
        {
            c2 = point1[j];

            if (c1 == c2)
            {
                sum1 += 1;
            }
        }

        for (int j = 0 ; j < 2 ; j++) //loop for point2
        {
            c2 = point2[j];

            if (c1 == c2)
            {
                sum1 += 2;

            }
        }

        for (int j = 0 ; j < 4 ; j++) //loop for point3
        {
            c2 = point3[j];

            if (c1 == c2)
            {
                sum1 += 3;
            }
        }

        for (int j = 0 ; j < 5 ; j++) //loop for point4
        {
            c2 = point4[j];

            if (c1 == c2)
            {
                sum1 += 4;
            }
        }

        for (int j = 0 ; j < 2 ; j++) //loop for point8
        {
            c2 = point8[j];

            if (c1 == c2)
            {
                sum1 += 8;
            }
        }

        for (int j = 0 ; j < 2 ; j++) //loop for point10
        {
            c2 = point10[j];

            if (c1 == c2)
            {
                sum1 += 10;
            }
        }

        if (player1[i] == 'k') //point5
        {
            sum1 += 5;
        }
    }

    //-------------------------------player2---------------------------------//

    length = strlen(player2);

    //taking care for upper and lower case
    for (i = 0; i < length; i++)
    {
        char c = player2[i];

        if (isupper(c))
        {
            player2[i] = tolower(c);
        }
    }

    for (i = 0 ; i < length ; i++)
    {
        c1 = player2[i];

        for (int j = 0 ; j < 10 ; j++) //loop for point1
        {
            c2 = point1[j];

            if (c1 == c2)
            {
                sum2 += 1;
            }
        }

        for (int j = 0 ; j < 2 ; j++) //loop for point2
        {
            c2 = point2[j];

            if (c1 == c2)
            {
                sum2 += 2;

            }
        }

        for (int j = 0 ; j < 4 ; j++) //loop for point3
        {
            c2 = point3[j];

            if (c1 == c2)
            {
                sum2 += 3;
            }
        }

        for (int j = 0 ; j < 5 ; j++) //loop for point4
        {
            c2 = point4[j];

            if (c1 == c2)
            {
                sum2 += 4;
            }
        }

        for (int j = 0 ; j < 2 ; j++) //loop for point8
        {
            c2 = point8[j];

            if (c1 == c2)
            {
                sum2 += 8;
            }
        }

        for (int j = 0 ; j < 2 ; j++) //loop for point10
        {
            c2 = point10[j];

            if (c1 == c2)
            {
                sum2 += 10;
            }
        }

        if (player2[i] == 'k') //point5
        {
            sum2 += 5;
        }
    }

    //final checking
    if (sum1 > sum2)
    {
        printf("Player 1 wins !\n");
    }

    if (sum1 < sum2)
    {
        printf("Player 2 wins !\n");
    }

    if (sum1 == sum2)
    {
        printf("Tie !\n");
    }

}