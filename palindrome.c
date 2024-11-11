#include <stdio.h>
#include <string.h>

// Recursive function to check if a string is a palindrome
int isPalindrome(char str[], int start, int end) {
    // Base case: If we have compared all characters or the string is of length 1
    if (start >= end) {
        return 1; // Palindrome
    }
    // Compare the first and last characters
    if (str[start] != str[end]) {
        return 0; // Not a palindrome
    }
    // Recur with the next characters (move towards the center of the string)
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Get the length of the string
    int len = strlen(str);

    // Check if the string is a palindrome
    if (isPalindrome(str, 0, len - 1)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
