/*Write a C program with the code below and complete it*/

#include <stdio.h>
#include <stdlib.h> // This header is included for the system function

int main(void) {

    int a, b;
    char string[8];
    int c;
    
    a = 7; 
    b = 14; 
    c = 128;

    printf("Type a word: ");
    scanf("%7[^\n]", string); //Without a number, can lead to a buffer overflow. We have limit the input to 7 characters.
    printf("Variables values are:\na=%d\nb=%d\nc=%d\n", a, b, c);

    system("pause");
    return 0;
}