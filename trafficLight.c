#include <stdio.h>
#include <unistd.h>  // For sleep()

int main() {
    char userInput;

    while (1) {
        // Red Light - Stop
        printf("Red Light: STOP\n");
        sleep(7);  // Wait for 7 seconds

        // Yellow Light - Ready
        printf("Yellow Light: READY\n");
        sleep(3);  // Wait for 3 seconds

        // Green Light - Go
        printf("Green Light: GO\n");
        sleep(8);  // Wait for 8 seconds

        // Ask user if they want to quit
        printf("Press 'q' to quit or any other key to continue: ");
        userInput = getchar();  // Get user input
        getchar();  // Consume newline character

        if (userInput == 'q' || userInput == 'Q') {
            break;  // Exit the loop and terminate the program
        }
    }

    printf("Exiting simulation...\n");
    return 0;
}
