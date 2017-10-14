/* Author: Thomas Baird
 * Linked List example
 * This example displays how to build a linked list with dynamically allocating memory
 * As well as pushing, appending, popping, and removing nodes from
 * the list.
 *
 * TODO: clear(), contains(), get(), get_last(), index_of(), last_index_of(),
 * remove_first(), size(), to_array()
 */
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Utils.h"

int main() {
    Node * head = NULL;
    head = malloc(sizeof(Node));
    head->val = 1;
    head->next = malloc(sizeof(Node));
    head->next->val = 2;
    head->next->next = NULL;
    printf("Printing Initial List Sequence:\n");
    printlist(head);

    printf("Printing List Sequence After Appending 3:\n");
    append(head, 3);
    printlist(head);

    printf("Printing List Sequence After Adding 4:\n");
    add(head, 4);
    printlist(head);

    printf("Print List Sequence after Pushing 0:\n");
    Node ** temphead = &head; // creates pointer to head pointer so we can modify the head
    push(temphead, 0);
    printlist(head);

    printf("Print List Sequence after Popping first element:\n");
    pop(temphead);
    printlist(head);

    printf("Print List Sequence after Removing last element:\n");
    remove_last(head);
    printlist(head);

    printf("Adding more element(s):\n");
    append(head, 4);
    printlist(head);
    printf("Print List Sequence after Removing element at index 1:\n");
    remove_by_index(temphead, 1);
    printlist(head);

    printf("Adding more element(s):\n");
    append(head, 5);
    append(head, 6);
    printlist(head);
    printf("Print List Sequence after Removing element with value 5:\n");
    remove_by_value(temphead, 5);
    printlist(head);

    printf("Print List Sequence after add_first element with value 0\n");
    add_first(temphead, 0);
    printlist(head);
}

void add(Node * head, int val) {
    append(head, val);
}

void add_first(Node ** head, int val) {
    push(head, val);
}

void append(Node * head, int val) {
    Node * current = head; // sets iterator to head
    while(current->next != NULL) { // iterates til last element
        current = current->next; // moves current iterator to next element in list
    }
    current->next = malloc(sizeof(Node)); // creates space for new element
    current->next->val = val; // sets new end element
    current->next->next = NULL;
}

void clear(Node ** head) {
    // TODO
}

bool contains(Node * head, int val) {
    // TODO
}

int get(Node * head, int index) {
    // TODO
}

int get_last(Node * head) {
    // TODO
}

int index_of(Node * head, int val) {
    // TODO
}

int last_index_of(Node * head, int val) {
    // TODO
}

void push(Node ** head, int val) {
    Node * newnode;
    newnode = malloc(sizeof(Node));
    newnode->val = val;
    newnode->next = *head; // derefrenced because head is a double pointer
    *head = newnode;
}

int pop(Node ** head) {
    int retval = -1;
    Node * nexthead = NULL; // creates empty new head

    if(*head == NULL) { // if list is empty
        return -1;
    }

    nexthead = (*head)->next; // sets new head variable
    retval = (*head)->val;
    free(*head); // free the data from the pointer head
    *head = nexthead; // updates head to new head
    return retval;
}

void printlist(Node * head) {
    Node * current = head; // sets iterator to head
    while(current != NULL) {
        printf("%d\n", current->val);
        current = current->next; // moves current iterator to next element in list
    }
}

int remove_first(Node ** head) {
    // TODO
}

int remove_last(Node * head) {
    Node * current = head;
    int retval = 0;
    if(current->next == NULL) { // if next is NULL that means we are in last element and we can remove
        retval = current->val;
        free(head);
        return retval;
    }
    // we traverse checking two ahead because we must set the pointer of the
    // new last element's (after the remove) next to NULL.
    while(current->next->next != NULL) {
        current = current->next;
    }

    return remove_next_node(current);
}

int remove_by_index(Node ** head, int index) {
    int retval = -1;
    Node * current = *head;
    int i = 0;

    if(index == 0) { // if first element we can just pop
        return pop(head);
    }

    for(i = 0; i < index - 1; i++) { // we stop one before ideal index because we need to link this node to next of the element we are removing
        if(current->next == NULL) { // make sure next is a valid element for us to delete. If not, return bad value
            return retval;
        }
        i++;
        current = current->next;
    }

    return remove_next_node(current);
}

int remove_by_value(Node ** head, int value) {
    int retval = -1;
    Node * current = *head;

    if(current->val == value) {
        return pop(head);
    }

    while(current->next != NULL) {
        if(current->next->val == value) {
            return remove_next_node(current);
        }
        current = current->next;
    }

    printf("Reached end of list. Node w/ value %d not found.\n", value);
    return -1;
}

int remove_next_node(Node * current) {
    Node * node_to_delete = current->next;
    int retval = node_to_delete->val;
    current->next = node_to_delete->next; // removing node_to_delete from linked list
    free(node_to_delete); // freeing node
    return retval;
}

int size(Node * head) {
    // TODO
}

int * to_array(Node * head) {
    // TODO
}
