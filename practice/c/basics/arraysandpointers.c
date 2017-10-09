/* Author: Thomas Baird
 * Simple example displaying how pointers and arrays work.
 * NOTE: The access of an array via a pointer or the actual variable
 * the array is assigned to is the same because the variable is
 * actually a constant pointer to the first element of the array.
 */
#include <stdio.h>

int main() {
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = &vowels;
    
    int i;
    /* The following loop displays different ways to retrieve
     * the memory address of elements of an array.
    */
    for(i = 0; i < 5; i++) {
        printf("&vowels[%d]: %u, pvowels + %d: %u, vowels + %d: %u\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
    }
    /* The following loop displays different ways to retrieve
     * the elements of an array w/ pointers.
    */
    for(i = 0; i < 5; i++) {
        printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
    }
}
