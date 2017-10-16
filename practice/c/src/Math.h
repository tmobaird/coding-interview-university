/*
 * Author: Thomas Baird
 */
#ifndef _MATH_H // makes sure it doesn't include this lib again if already included
#define _MATH_H // defines this lib

#include "Utils.h"

int sum(int first, int second);
float floatSum(int first, float second);
int factorial(int num);
bool is_prime(int num);
int reverse(int num);
bool is_palindrome(int num);

#endif // _MATH_H
