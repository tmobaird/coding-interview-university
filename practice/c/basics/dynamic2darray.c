/* Author: Thomas Baird
 * Sample of dynamic memory allocation of 2D arrays with pointers.
 * This example creates a pointer to a pointer for a 2 char size space (rows).
 * From there each of those two char spaces point to another set of 5 allocated char spaces (columns).
 * These spaces in memory are then set using array notation and outputted.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2;
    int cols = 5;

    int i, j;

    char **pvowels = (char **) malloc(rows * sizeof(char *)); // sets a pointer to a pointer for an allocated space of two chars

    pvowels[0] = (char *) malloc(cols * sizeof(char *)); // allocates 5 char spaces in pvowels[0] for first column
    pvowels[1] = (char *) malloc(cols * sizeof(char *)); // allocates 5 char spaces in pvowels[0] for second column

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%c ", pvowels[i][j]);
        }
        free(pvowels[i]); // frees single row after all usage
        printf("\n");
    }

    free(pvowels); // free all of pvowels (DOES NOT DELETE VARIABLE)
    return 0;
}
