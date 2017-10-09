/* Author: Thomas Baird
 * Function parameters as pointers practice
 * First example passes the reference to an integer
 * and increments the value of the integer.
 * Second example passes the reference to a person
 * and increments their age.
 */
#include <stdio.h>

typedef struct {
    int age;
} person;

void addone(int * num);
void birthday(person * somebody);

int main() {
    int numOne = 1;
    printf("numOne's value is %d\n", numOne);
    addone(&numOne); // passes a reference to numOne
    printf("numOne's value is now %d\n", numOne);

    person thomas;
    thomas.age = 23;
    printf("thomas is %d years old\n", thomas.age);
    birthday(&thomas); // passes a reference to thomas
    printf("thomas is now %d years old\n", thomas.age);

    return 0;
}

void addone(int * num) {
    (*num)++;
}

void birthday(person * somebody) {
    somebody->age++; // auto dereferences somebody and calls .age
}
