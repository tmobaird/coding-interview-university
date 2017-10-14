/* Author: Thomas Baird
 * Basic Struct usage w/ typedef
 * Defines a struct with a name and an age,
 * and creates this as the type 'person'.
 */
#include <stdio.h>

typedef struct {
    char * name;
    int age;
} person;

void printInfo(person myPerson);

int main() {
    person thomas; // initializes thomas
    
    thomas.name = "Thomas";
    thomas.age = 24;
    printInfo(thomas);
    return 0;
}

void printInfo(person myPerson) {
    printf("%s is %d years old.\n", myPerson.name, myPerson.age);
}
