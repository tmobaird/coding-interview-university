/*
 * Author: Thomas Baird
 * Library of functions used for simple bit manipulation operations
 */
#include <stdio.h>
#include "BitOps.h"
#include "Utils.h"

int left_shift(int num, int bytes) {
    return num << bytes;
}

int right_shift(int num, int bytes) {
    return num >> bytes;
}
