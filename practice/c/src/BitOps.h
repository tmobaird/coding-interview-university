/*
 * Author: Thomas Baird
 */
#ifndef _BITOPS_H // makes sure it doesn't include this lib again if already included
#define _BITOPS_H // defines this lib

#include "Utils.h"

int left_shift(int num, int bytes);
int right_shift(int num, int bytes);

#endif // _BITOPS_H