/* Author: Thomas Baird
 * Header for Linked List example
 * Includes struct defintitions and method defs.
 */
#ifndef _LINKEDLIST_H // makes sure it doesn't include this lib again if already included
#define _LINKEDLIST_H // defines this lib

struct Node {
    int val;
    struct Node * next;
};

typedef struct Node Node; // defines the Node struct as type Node

// Function Declarations
void printlist(Node * head);
void append(Node * head, int val);
void push(Node ** head, int val);
int pop(Node ** head);
int remove_last(Node * head);
int remove_by_index(Node ** head, int index);
int remove_by_value(Node ** head, int value);
int remove_next_node(Node * previous);

#endif // _LINKEDLIST_H
