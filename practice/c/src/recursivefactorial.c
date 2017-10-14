/* Author: Thomas Baird
 * Factorial calculation using recursion.
 * The point of this example is to display the use
 * of recursion to simplify a program.
 */
#include <stdio.h>

int factorial(int num);

int main() {
    printf("The factorial of 1 (1!) is %d\n", factorial(1));
    printf("The factorial of 3 (3!) is %d\n", factorial(3));
    printf("The factorial of 5 (5!) is %d\n", factorial(5));
}

int factorial(int num) {
    if(num == 1) { // base case
        return 1;
    } else if(num > 1) { // recursive case
        return num * factorial(num - 1);
    }
    return 0;
}
