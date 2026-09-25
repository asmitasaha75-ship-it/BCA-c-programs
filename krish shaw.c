// write a c program to read an integer value and check wheather it is positive or not , if it 
//is positive then check whether it is odd or even 
#include <stdio.h>

int main() {
    int number;

    // Input the integer value from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number > 0) {
        printf("%d is a positive number.\n", number);

        // Check if the positive number is even or odd
        if (number % 2 == 0) {
            printf("It is an even number.\n");
        } else {
            printf("It is an odd number.\n");
        }
    } else if (number == 0) {
        printf("The number is zero (neither positive nor negative).\n");
    } else {
        printf("%d is a negative number, so odd/even check was skipped.\n", number);
    }

    return 0;
 
}
