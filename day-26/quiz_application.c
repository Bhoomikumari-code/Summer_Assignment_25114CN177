// This program create the quiz application
#include <stdio.h>

int main()
{
    int score = 0, ans;

    printf("Quiz Application\n\n");

    printf("Q1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n");
    scanf("%d", &ans);

    if (ans == 2)
        score++;

    printf("\nQ2. 5 + 3 = ?\n");
    printf("1. 6\n2. 7\n3. 8\n");
    scanf("%d", &ans);

    if (ans == 3)
        score++;

    printf("\nQ3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n");
    scanf("%d", &ans);

    if (ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}