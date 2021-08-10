#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//string key[1] = {"\0"};
char sign[5] = { ' ', '?', ',', '.', '!' };
int number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

string plaintext;
string ciphertext;

int main(int arg, string key[1])
{
    int recall = 0;
    //check key

    if (key[1] != NULL)
    {
        if (strlen(key[1]) == 26)
        {
            for (int k = 0; k < 26; k++)
            {
                for (int num = 0; num < 10; num++)
                {
                    if (key[1][k] == number[num])
                    {
                        printf("Key must only contain alphabetic characters.\n");
                        recall += 1;
                        return 1;
                    }
                    else
                    {
                        for (int l = 0; l < strlen(key[1])-1; l++)
                        {
                            if (key[1][l] == key[1][l+1])
                            {
                                printf("Key must not contain repeated characters.\n");
                                recall += 1;
                                return 1;
                                break;
                            }

                        }
                    }
                }
            }
        }
        else
        {
            printf("Key must contain 26 characters.\n");
            recall += 1;
            return 1;
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        recall += 1;
        return 1;
    }


    if (recall != 1)
    {
        plaintext = get_string("plaintext: ");

        printf("ciphertext: ");

        for (int i = 0; i < strlen(plaintext); i++)
        {
            //for puntuations
            for (int k = 0; k < 4; k++)
            {
                if (plaintext[i] == sign[k])
                    {
                            printf("%c", sign[k]);
                    }
            }

            //for number
            for (int num = 10; num >= 0; num--)
            {
                if (plaintext[i] == number[num])
                {
                    printf("%c", number[num]);
                }
            }

            //for text
            for (int j = 0; j < 26; j++)
            {
                if (tolower(plaintext[i]) == alphabets[j])
                {
                    if (islower(plaintext[i]))
                    {
                        printf("%c", tolower(key[1][j]));
                    }
                    else
                    {
                        if (isupper(plaintext[i]))
                        {
                            printf("%c", toupper(key[1][j]));
                        }
                    }

                }

            }
        }
    }

    printf("\n");

}