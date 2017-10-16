/* Author: Thomas Baird
 * Simple Sum program using integers and floats
 */
#include <stdio.h>
#include "Math.h"
#include "Utils.h"

int sum(int first, int second) {
    return first + second;
}

int factorial(int num) {
    int i;
    int total = 1;
    for(i = num; i > 1; i--) {
        total = total * i;
    }
    return total;
}

bool is_prime(int num) {
    if(num < 2) {
        return false;
    }
    for(int i = num - 1; i > 1; i--) {
        if((num % i) == 0) {
            return false;
        }
    }
    return true;
}


float floatSum(int first, float second) {
    return first + second;
}
