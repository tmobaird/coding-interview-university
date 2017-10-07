/* Author: Thomas Baird
 * Simple Sum program using integers and floats
 */
#include <stdio.h>

int sum(int first, int second);
float floatSum(int first, float second);

int main() {
    int a = 1;
    int b = 2;
    float c = 3.5;
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));
    printf("The sum of %d and %f is %f\n", a, c, floatSum(a, c));
}

int sum(int first, int second) {
    return first + second;
}

float floatSum(int first, float second) {
    return first + second;
}
