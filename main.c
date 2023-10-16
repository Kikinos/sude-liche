#include <stdio.h>

int main() {

    int number;
    int countOfChar;

    do {
        printf("Enter a whole natural number.\n");
        scanf("%d", &number);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You didn't entered a whole number. Try again!\n");
        } else if (number == 0) {
            printf("Your number was 0, program will be ended.\n");
        } else if (number < 0) {
            printf("The number can't be negative. Try again!\n");
        } else if (number % 2 == 0) {
            printf("The number is even.\n", number);
        } else {
            printf("The number %d is odd.\n", number);
        }
    } while (number != 0);
    return 0;
}
