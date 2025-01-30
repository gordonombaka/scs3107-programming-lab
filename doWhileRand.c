#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;

    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 10
    target = rand() % 10 + 1;

    // Prompt the user to guess the number
    do {
        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &guess);
        attempts++;  // Increment the attempts count

        if (guess < target) {
            printf("Too low! Try again.\n");
        } else if (guess > target) {
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! The number was %d.\n", target);
            printf("You took %d attempts.\n", attempts);
        }
    } while (guess != target);  // Continue until the guess is correct

    return 0;
}
