#include <stdio.h>
#include <stdlib.h>

// program that calculates the income tax based on the user's annual income
// prompt the user to enter their income and calculate the tax based on the rules provided.

int main()
{
    // Create variables

    float annual_income, net_income;
    float tax;

    // Ask for user input

    printf("Enter your annual income amount: ");
    scanf("%f", &annual_income);
   

    // Computation

    if (annual_income <= 10000) {
        tax = 0;
        net_income = annual_income - (0 * annual_income);
        
        printf("Your tax is %.2f and your net income after tax is %.2f", tax, net_income);
    }
    else if (annual_income >= 10001 && annual_income <= 30000) {
        tax = 10;
        net_income = annual_income - (tax / 100 * annual_income);
        printf("Your tax is %.2f and your net income after tax is %.2f", tax, net_income);

    }
    else if (annual_income >= 30001 && annual_income <= 50000) {
        tax = 20;
        net_income = annual_income - (tax / 100 * annual_income);
        printf("Your tax is %.2f and your net income after tax is %.2f", tax, net_income);

    }
    else if (annual_income >= 50001) {
        tax = 30;
        net_income = annual_income - (tax / 100 * annual_income);
        printf("Your tax is %.2f and your net income after tax is %.2f", tax, net_income);
        
    }

    else {
        printf("Invalid Input");
    }


    return 0;
}
