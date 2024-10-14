#include <stdio.h>
#include <stdlib.h>

// asks user to enter a number (1 to 7) representing a day of the week i.e 1 for Mon
// print the name of the corresponding day using switch-case statement
// number outside range of 1 to 7 should print invalid input

int main()
{
    // Create variables

    int number;

    // Ask for user input

    printf("Enter a number representing the day of the week(i.e 1 for Mon): ");
    scanf("%d", &number);
    

    // Computation

    switch (number)
    {
    case 1:
        /* code */
        printf("The day is Monday");
        break;

    case 2:
        /* code */
        printf("The day is Tuesday");
        break;

    case 3:
        /* code */
        printf("The day is Wednesday");
        break;

    case 4:
        /* code */
        printf("The day is Thursday");
        break;

    case 5:
        /* code */
        printf("The day is Friday");
        break;

    case 6:
        /* code */
        printf("The day is Saturday");
        break;

    case 7:
        /* code */
        printf("The day is Sunday");
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
  

    return 0;
}
