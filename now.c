#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Global head pointer
gfdsrv
struct Node *head = NULL;

// Function to create a linked list from an array
void createLinkedList(int arr[], int n) {
    struct Node *newNode, *temp;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;
    temp = head;

    for (int i = 1; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
}

// Function to display linked list
void displayLinkedList() {
    struct Node *temp = head;
    printf("\nLinked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to search for a key in the linked list
struct Node* findKey(int key) {
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data == key)
            return temp;
        temp = temp->next;
    }
    return NULL;
}

// Function to insert node at the beginning
void insertAtFirst(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to insert node at the end
void insertAtEnd(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Function to insert node at any position
void insertAtPosition(int value, int position) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    struct Node *temp = head;
    for (int i = 0; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node by key
void deleteNode(int key) {
    struct Node *temp = head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Key %d not found.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Main function
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    createLinkedList(arr, n);
    displayLinkedList();

    printf("\nInserting 5 at the beginning...\n");
    insertAtFirst(5);
    displayLinkedList();

    printf("\nInserting 60 at the end...\n");
    insertAtEnd(60);
    displayLinkedList();

    printf("\nInserting 25 at position 3...\n");
    insertAtPosition(25, 3);
    displayLinkedList();

    printf("\nSearching for key 30...\n");
    struct Node *found = findKey(30);
    if (found) printf("Key found: %d\n", found->data);
    else printf("Key not found.\n");

    printf("\nDeleting key 40...\n");
    deleteNode(40);
    displayLinkedList();

    return 0;
}

