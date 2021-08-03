#include <stdio.h>
#include <cs50.h>

//process
int main()
{
    //initialize
    int answer=0,i,j,k;

    //input
    while(answer<1 || answer>8)
    {
        answer=get_int("Height: ");
    }

    //rows
    for(i=1;i<=answer;i++)
    {
        //columns - print spaces
        for(k=answer;k>i;k--)
        {
            printf(" ");
        }

        //print-#
        for(j=1;j<(i+1);j++)
        {
            printf("#");
        }

        //New line
        printf("\n");
    }
}