/*Explicit conversion is done manually by placing the type in parenthisis ()
infront of the value. See the example below: */

#include <stdio.h>

void main() {
    int num1 = 5;
    int num2 = 2;

// Calculation of division and manually converting

float sum = (float) num1 / num2;

printf("%.2f", sum); // .2 is used to round of to 2dp
}