/* Author: Thomas Baird
 * Header for Linked List example
 * Includes struct defintitions and method defs.
 */
#ifndef _LINKEDLIST_H // makes sure it doesn't include this lib again if already included
#define _LINKEDLIST_H // defines this lib

#include "Utils.h"

struct Node {
    int val;
    struct Node * next;
};

typedef struct Node Node; // defines the Node struct as type Node

// Function Declarations
void printlist(Node * head);
void add(Node * head, int val);
void add_first(Node ** head, int val);
void append(Node * head, int val);
void clear(Node ** head); // TODO: removes all nodes from the list
bool contains(Node * head, int val); // TODO: checks if list includes node with value
int get(Node * head, int index); // TODO: get value at index
int get_last(Node * head); // TODO: get value of last node
int index_of(Node * head, int val); // TODO: returns index of first node with value
int last_index_of(Node * head, int val); // TODO: returns index of last occurent of node with value
void push(Node ** head, int val);
int pop(Node ** head);
int remove_first(Node ** head); // TODO: removes first node in list
int remove_last(Node * head);
int remove_by_index(Node ** head, int index);
int remove_by_value(Node ** head, int value);
int remove_next_node(Node * previous);
int size(Node * head); // TODO: returns number of elements in list
int * to_array(Node * head); // TODO: returns array containing list's node values

#endif // _LINKEDLIST_H
