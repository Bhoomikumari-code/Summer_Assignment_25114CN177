// This program create the number guessing game
#include <stdio.h>

int main(){
    int secret = 7, guess;

    while (1)
    {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if (guess == secret)
        {
            printf("Congratulations! You guessed the correct number.");
            break;
        }
        else if (guess < secret)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}