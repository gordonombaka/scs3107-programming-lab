#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Program that asks user for first number between 1-20
    // Adds the number from the first to 20 and displays sum

    // Declare variables

    int first_number, sum = 0;

    // User input
    while (1)
    {
        printf("Enter a number between 1 - 20: ");
        scanf("%d", &first_number);

    // Check for valid input
        if (first_number >= 1 && first_number <= 20)
        {
            break; // Exit the loop if the input is valid
        }
        else {
            printf("Invalid input. Enter a number between 1 - 20 \n");
        }
        
    }
    
    // Computation
    for (int i = first_number; i <= 20; i++) {
        sum += i;
    }

    printf("The sum of the numbers is %d", sum);

return 0;

}