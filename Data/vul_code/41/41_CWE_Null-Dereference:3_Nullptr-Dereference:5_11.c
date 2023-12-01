#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int a;
    struct node* next;
} node;

void addSpecific(node* head, int n) {
    node* temp = NULL;
    if (head->next == NULL) {
        temp = (node*)malloc(sizeof(node));
        temp->a = n;
        temp->next = NULL;
        head->next = temp;
    } else {
        temp = (node*)malloc(sizeof(node));
        temp->a = n;
        temp->next = head->next;
        head->next = temp;
    }
}

void printList(node* head) {
    node* current = head->next;
    while (current != NULL) {
        printf("%d ", current->a);
        current = current->next;
    }
    printf("\n");
}

int main() {
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;

    addSpecific(head, 2);
    addSpecific(head, 4);
    addSpecific(head, 6);
    addSpecific(head, 8);

    printList(head);

    return 0;
}