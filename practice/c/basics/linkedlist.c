/* Author: Thomas Baird
 * Linked List example
 * This example displays how to build a linked list with dynamically allocating memory
 * As well as pushing, appending, popping, and removing nodes from
 * the list.
 *
 * TODO: remove_by_index() and remove_by_value()
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void printlist(node_t * head);
void append(node_t * head, int val);
void push(node_t ** head, int val);
int pop(node_t ** head);
int removelast(node_t * head);

int main() {
    node_t * head = NULL;
    head = malloc(sizeof(node_t));
    head->val = 1;
    head->next = malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;
    printf("Printing Initial List Sequence:\n");
    printlist(head);

    printf("Printing List Sequence After Appending 3:\n");
    append(head, 3);
    printlist(head);

    printf("Print List Sequence after Pushing 0:\n");
    node_t ** temphead = &head; // creates pointer to head pointer so we can modify the head
    push(temphead, 0);
    printlist(head);

    printf("Print List Sequence after Popping first element:\n");
    temphead = &head;
    pop(temphead);
    printlist(head);

    printf("Print List Sequence after Removing last element:\n");
    removelast(head);
    printlist(head);
}

void printlist(node_t * head) {
    node_t * current = head; // sets iterator to head
    while(current != NULL) {
        printf("%d\n", current->val);
        current = current->next; // moves current iterator to next element in list
    }
}

void append(node_t * head, int val) {
    node_t * current = head; // sets iterator to head
    while(current->next != NULL) { // iterates til last element
        current = current->next; // moves current iterator to next element in list
    }
    current->next = malloc(sizeof(node_t)); // creates space for new element
    current->next->val = val; // sets new end element
    current->next->next = NULL;
}

void push(node_t ** head, int val) {
    node_t * newnode;
    newnode = malloc(sizeof(node_t));
    newnode->val = val;
    newnode->next = *head; // derefrenced because head is a double pointer
    *head = newnode;
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * nexthead = NULL; // creates empty new head

    if(*head == NULL) { // if list is empty
        return -1;
    }

    nexthead = (*head)->next; // sets new head variable
    retval = (*head)->val;
    free(*head); // free the data from the pointer head
    *head = nexthead; // updates head to new head
    return retval;
}

int removelast(node_t * head) {
    node_t * current = head;
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

    retval = current->next->val;
    free(current->next); // remove next element
    current->next = NULL; // sets current element's next to null because this is new end of list
    return retval;
}
