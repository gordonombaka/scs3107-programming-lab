// Program that counts the number of times a character is added i.e * and #
// Outputs the total counts and user should use exit to end the game

#include <stdio.h>
#include <stdlib.h>

int main () {

    // Declare variables

    char symbol;
    int star = 0;
    int hash = 0;


    while (1)
    {
        // User inputs
        printf("Enter a special symbol between * or # (Type 'e' to exit): ");
        scanf(" %c", &symbol);

    if (symbol == '*') {
        star++; // Increment star count
    }
    else if (symbol == '#') {
        hash++; // Increment hash symbol
    }
    else if (symbol == 'e') {
        // Check if user wants to exit
        printf("Exiting the game \n");
        break; // Exit the loop 
    }
    else {
        printf("Invalid input. \n");
    }

    }

    // Output

    printf("The number of stars is %d and the number of hashes is %d", star, hash);

    return 0;

}