/* This example shows an example of basic input/output C program for characters*/

#include <stdio.h>

void main() {
    char initial;
    printf("Enter the first character of your surname: ");
    initial = getchar();
    printf("The first character of your surname is::");
    putchar(initial);
    putchar('\n');
}
