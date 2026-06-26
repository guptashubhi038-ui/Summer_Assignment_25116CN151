#include <stdio.h>

int main()
{
    int secret, guess;
    printf("=== Number Guessing Game ===\n");
    printf("Enter the secret number: ");
    scanf("%d", &secret);

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secret)
            printf("Too High!\n");
        else if (guess < secret)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != secret);

    return 0;
}