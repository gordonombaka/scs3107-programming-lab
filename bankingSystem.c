#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0; // Initialize balance to 0.0

    do {
        // Display the menu
        printf("\n Markdown \n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        // Switch-case for menu options
        switch(choice) {
            case 1: {
                float deposit;
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("Deposited Ksh %.2f successfully.\n", deposit);
                    printf("New Balance: Ksh %.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            }
            
            case 2: {
                float withdrawal;
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdrawal);
                // Check if withdrawal is greater than available balance
                if (withdrawal > balance) {
                    printf("Insufficient funds.\n");
                } else if (withdrawal > 0) {
                    balance -= withdrawal;
                    printf("Withdrew Ksh %.2f successfully.\n", withdrawal);
                    printf("New Balance: Ksh %.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            }
            
            case 3:
                // Display current balance
                printf("Current Balance: Ksh %.2f\n", balance);
                break;
            
            case 4:
                // Exit the program
                printf("Thank you for banking with us. Goodbye\n");
                break;
            
            default:
                // Handle invalid choice
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 4); // Continue displaying menu until user chooses to exit

    return 0;
}
