#include <stdio.h>

void main() {

// Declare variables for the calculation

int year, age_calc;
    
// Ask input from the user

printf("Enter your year of birth: ");
scanf("%d", &year);

// Calculate the age from the year given

age_calc = 2024 - year;

// Output information for the user to see

printf("You are now %d years old.", age_calc);

}