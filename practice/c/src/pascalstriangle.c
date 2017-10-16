/* Author: Thomas Baird
 * Pascal Triangle example to work on dynamic memory allocation with 2D arrays
 * Should properly display the first 4 rows of pascals triangle
 * only allocating an exact amount of 10 spaces.
 * First allocate a pointer to a pointer with 4 spaces (4 rows in triangle)
 * Then for each row of the initial array dynamically allocate the number of spaces
 * needed for that row (ie. Row 1: 1, Row 2: 2, Row 3: 3).
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int **pnumbers = (int **) malloc(4 * sizeof(int *)); // creates a pointer to array with 3 spaces
    pnumbers[0] = (int *) malloc(sizeof(int)); // allocates memory for top row
    pnumbers[1] = (int *) malloc(2 * sizeof(int)); // allocates memory for 2nd row
    pnumbers[2] = (int *) malloc(3 * sizeof(int)); // allocates memory for 3rd row
    pnumbers[3] = (int *) malloc(4 * sizeof(int)); // allocates memory for 3rd row

    // set values
    pnumbers[0][0] = 1;
    pnumbers[1][0] = 1;
    pnumbers[1][1] = 1;
    pnumbers[2][0] = 1;
    pnumbers[2][1] = 2;
    pnumbers[2][2] = 1;
    pnumbers[3][0] = 1;
    pnumbers[3][1] = 3;
    pnumbers[3][2] = 3;
    pnumbers[3][3] = 1;

    int i, j;
    for (i = 0; i < 4; i++) { // iterating through all rows
        for (j = 0; j <= i; j++) { // j <= i because the number of columns is equal to the row index
            printf("%d ", pnumbers[i][j]);
        }
        printf("\n");
        free(pnumbers[i]); // freeing individual row after use
    }

    free(pnumbers); // freeing referenced data
    return 0;
}
