#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

//alphabets
char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char word_end[1] = { " "};
char words_sentence[2] = { '?' , '.' };

//initialize
int count_letters = 0;
int count_words = 1;
int count_sentences = 0;


//main
int main(void)
{
    string text = get_string("Text: ");

    int length = strlen(text);


    for (int i = 0; i < length; i++)
    {
        //upper case to lower case
        if (isupper(text[i]))
        {
            text[i] = tolower(text[i]);
        }

        //count letters
        for (int j = 0; j < 26; j++)
        {
            if (text[i] == alphabets[j])
            {
                count_letters += 1;
            }
        }

        //count sentences
        for (int j = 0; j < 2; j++)
        {


            //checking reputation
            if (text[i] == words_sentence[j])
            {
                count_sentences += 1;

            }
        }
    }

    //count words
    for (int i = 0; i < length; i++)
    {
        if (text[i] == word_end[0])
        {
            count_words += 1;
        }
    }

    //output
    float L = (count_letters * 100 / count_words);
    float S = (count_sentences * 100 / count_words);

    float index = ((0.0588 * L) - (0.296 * S) - 15.8);

    if (index <= 1 )
    {
        printf("Before Grade 1\n");
    }

    if (index >1 && index < 2.50)
    {
        printf("Grade 2\n");
    }

    if (index >2.50 && index < 3.50)
    {
        printf("Grade 3\n");
    }

    if (index >3.50 && index < 4.50)
    {
        printf("Grade 4\n");
    }

    if (index >4.50 && index < 5.50)
    {
        printf("Grade 5\n");
    }

    if (index >5.50 && index < 6.50)
    {
        printf("Grade 6\n");
    }

    if (index >6.50 && index < 7.55)
    {
        printf("Grade 7\n");
    }

    if (index >7.55 && index < 8.50)
    {
        printf("Grade 8\n");
    }

    if (index >8.50 && index < 9.50)
    {
        printf("Grade 9\n");
    }

    if (index >9.50 && index < 10.50)
    {
        printf("Grade 10\n");
    }

    if (index >10.50 && index < 11.50)
    {
        printf("Grade 11\n");
    }

    if (index >11.50 && index < 12.50)
    {
        printf("Grade 12\n");
    }

    if (index >12.50 && index < 13.50)
    {
        printf("Grade 13\n");
    }

    if (index >13.50 && index < 14.50)
    {
        printf("Grade 14\n");
    }

    if (index >14.50 && index < 15.60)
    {
        printf("Grade 15\n");
    }

    if (index >15.60)
    {
        printf("Grade 16+\n");
    }
}