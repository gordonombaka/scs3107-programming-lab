//Write a program that takes a day of the week (as an integer from 1 to 7, where 1 represents 
//Monday and 7 represents Sunday) and outputs a special message for each day using a switchcase statement. Additionally, implement a secondary feature where:
//1. If the input is between 1 and 5 (weekdays), it also checks if the current time is before or 
//after noon and displays "Good Morning" or "Good Afternoon."
//2. If the input is 6 or 7 (Saturday or Sunday), display a special weekend message regardless 
//of the time of day. Use nested switch-case or if-else blocks as necessary to handle the time checking.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, hour;

    // Input for day of the week
    printf("Enter the day of the week (Monday = 1, Sunday = 7): ");
    scanf("%d", &day);

    // Input for current hour
    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);

    // Switch-case for days of the week
    switch (day) {
        case 1:
            printf("Today is Monday. It's a new dawn.\n");
            break;
        case 2:
            printf("Today is Tuesday. The week is still fresh.\n");
            break;
        case 3:
            printf("Today is Wednesday. It's mid-week\n");
            break;
        case 4:
            printf("Today is Thursday. We are about to end the week\n");
            break;
        case 5:
            printf("Today is Friday. The weekend has began\n");
            break;
        case 6:
            printf("Today is Saturday. Yay, it's the weekend\n");
            break;
        case 7:
            printf("Today is Sunday. Go to church\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            return 1; // Exit the program with an error code
    }

    // Check if the day is a weekday or weekend
    if (day >= 1 && day <= 5) {
        // Nested switch-case for time of day
        switch (hour) {
            case 0 ... 11: // From 0 to 11 inclusive
                printf("Good Morning!\n");
                break;
            case 12 ... 14: // From 12 to 14 inclusive
                printf("Good Afternoon!\n");
                break;
            case 15 ... 18: // From 15 to 18 inclusive
                printf("Good Evening!\n");
                break;
            case 19 ... 23: // From 19 to 23 inclusive
                printf("Good night!\n");
                break;
            default:
                printf("Invalid hour! Please enter an hour between 0 and 23.\n");
                return 1; // Exit the program with an error code
        }
    }

    return 0;
}
