// This project is based on a number guessing game. Guess a number between 1 to 100 and follow the instructions.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int guessed;
    int no_of_guesses = 0;

    int randomNumber = (rand() % 100) + 1;       

    do
    {
        printf("\nEnter your guessed number:");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("\nLower the number please...");
        }
        else if (guessed < randomNumber)
        {
            printf("\nHigher the number please...");
        }

        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("\nCONGRATULATIONS !!! %d is the CORRECT number :)", guessed);
    printf("\nYou guessed the correct number in %d guesses", no_of_guesses);

    return 0;
}

/* ● rand() function will generate a random number from 0 to 32767 (for windows)
   ● % 100 will make its remainder lie between 0 to 99
   ● +1 will make its range from 0 to 100  */
