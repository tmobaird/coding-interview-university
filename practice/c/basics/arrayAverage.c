#include <stdio.h>

int main() {
    int array[ ] = { 1, 2, 3, 4, 5 };
    int sum = 0;
    // Gets bite size of array and divides it by bite size of first element
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    int average = sum / size;
    printf("The average of all elements in the array is %d.\n", average);
}

