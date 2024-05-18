#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, n_guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    do
    {

        printf("guess the number between 1 to 100=");
        scanf("%d", &guess);

        if (number > guess)
        {
            printf("HIGHER NUMBER PLZ\n");
        }
        else if (number < guess)
        {
            printf("LOWER NUMBER PLZ\n");
        }
        else
        {
            printf("you guessed it in %d attempt make smile\n", n_guesses);
        }
        n_guesses++;
    } while (guess != number);
    return 0;
}
