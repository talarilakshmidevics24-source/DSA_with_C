#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *last = NULL;

void insert(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;i

    if (last == NULL) {
        last = newnode;
        newnode->next = newnode;
    } else {
        newnode->next = last->next;
        last->next = newnode;
        last = newnode;
    }
}

void display() {
    struct node *temp;
    if (last == NULL) {
        printf("List is empty\n");
        return;
    }
    temp = last->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("1.Insert  2.Display  3.Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            scanf("%d", &value);
            insert(value);
        } else if (choice == 2) {
            display();
        } else if (choice == 3) {
            break;
        }
    }
    return 0;
}