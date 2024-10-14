#include <stdio.h>
#include <stdlib.h>

// program that calculates a user's total savings after a given number of months
// prompt the user to input their monthly savings amount and the number of months they plan to save
// calculate and print the total amount saved after the specified period

int main()
{
    // Create variables

    float monthly_savings, total_savings;
    int months;

    // Ask for user input

    printf("Enter your monthly savings amount: ");
    scanf("%f", &monthly_savings);
    printf("Enter the number of months you plan to save: ");
    scanf("%d", &months);



    // Computation

    total_savings = monthly_savings * months;

    // Output

    printf("You save %f per month. After %d months, you will save a total of %.2f", monthly_savings, months, total_savings);


    return 0;
}
