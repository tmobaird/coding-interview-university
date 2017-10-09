/* Author: Thomas Baird
 * Dynamic allocation practice
 * This example dynamically allocates a specific
 * amount of memory based upon the byte size of the struct `point`.
 * Then since pointone is already of type `point`, we can
 * dereference and update it's attributes.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point;

int main() {
    point * pointone;
    pointone = malloc(sizeof(point)); // dynamically allocates the byte size of the point struct to the pointone pointer
    pointone->x = 10;
    pointone->y = 12;
    printf("Point one can be found at coordinates: (%d, %d)\n", pointone->x, pointone->y);
    free(pointone) // frees the data that pointone points to
    return 0;
}
