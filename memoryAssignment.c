/*Write a program that declares an integer variable and assigns it a value.
The program must show the value of the variable and its memory address*/

#include <stdio.h>

void main() {
    int num1 = 10; 
    printf("The value of the variable is %d.", num1);
    printf("\nIt's size in memory is %lu", sizeof(num1));
    printf("\nIt's memory address is %p", &num1);
}

/*It is useful to know the memory address because they allow us to manipulate the data in the 
computer's memory. This can reduce the code and improve the performance.*/