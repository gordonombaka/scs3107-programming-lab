#include <stdio.h>

int main() {
    float balance, withdrawal;

    // Ask the user to enter their account balance
    printf("Enter your account balance: $");
    scanf("%f", &balance);

    // Ask the user to enter the amount they want to withdraw
    printf("Enter the amount to withdraw: $");
    scanf("%f", &withdrawal);

    // Check if the withdrawal amount is less than or equal to the balance
    if (withdrawal <= balance) {
        // Update the balance and display the remaining balance
        balance -= withdrawal;
        printf("Withdrawal successful.\n");
        printf("Remaining balance: $%.2f\n", balance);
    } else {
        // Display an error message if the withdrawal amount exceeds the balance
        printf("Error: Insufficient balance. Withdrawal denied.\n");
    }

    return 0;
}
