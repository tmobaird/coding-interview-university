/*
 * Author: Thomas Baird
 * Library of functions used for simple mathematical calculations
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

int reverse(int num) {
    int last;
    int reversed_num = 0;
    while(num > 0) {
        last = num % 10; // gets last digit
        // since this is new last it needs to multiply the previous number by 10
        // to get proper number size
        reversed_num = (reversed_num * 10) + last;
        num = num / 10; // cuts number down, repeats
    }
    return reversed_num;
}

bool is_palindrome(int num) {
    return reverse(num) == num;
}

int fibonacci(int index) {
    if(index < 1) { // Exception Case
        return -1;
    }
    if(index < 3) { // Base Case
        return 1;
    }
    return fibonacci(index - 1) + fibonacci(index - 2);
}

float floatSum(int first, float second) {
    return first + second;
}
