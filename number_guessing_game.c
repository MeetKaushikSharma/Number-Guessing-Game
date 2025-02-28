#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int guessed_number, no_of_guesses = 0;

    do
    {
        printf("Enter The Number: ");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
        {
            printf("Lower Number Please !\n");
        }
        else if (guessed_number < random_number)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Congrats!:) \n");
        }
        no_of_guesses++;

    } while (guessed_number != random_number);

    printf("You Guessed The number in %d guesses!\n", no_of_guesses);
    if (no_of_guesses < 5)
    {
        printf("You are legend at guessing Numbers!");
    }
    else if (no_of_guesses < 10)
    {
        printf("You are good at guessing Numbers!");
    }
    else
    {
        printf("You are bad at guessing Numbers!");
    }

    return 0;
}