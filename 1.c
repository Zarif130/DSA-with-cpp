#include <stdio.h>
#include <stdlib.h>

// Global pointer to the head of the list
// A structure pointer (self-referential structure definition)
struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// --- 1. Insert at End ---
void insertAtEnd(int value) {
    // 1. Create a new node (Dynamic Memory Allocation)
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL; // New node will always be the last node

    // 2. Check if the list is empty
    if (head == NULL) {
        head = newNode;
    } else {
        // 3. Traverse to the last node
        struct Node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        // 4. Link the last node to the new node
        current->next = newNode;
    }
    printf("Inserted %d at the end.\n", value);
}

// --- 2. Delete from Beginning ---
void deleteFromBeginning() {
    // 1. Check if the list is empty
    if (head == NULL) {
        printf("List is empty. Deletion failed.\n");
        return;
    }

    // 2. Store the node to be deleted
    struct Node *temp = head;
    
    // 3. Move the head pointer to the next node
    head = head->next;

    // 4. Free the memory of the deleted node (Dynamic Memory De-allocation)
    printf("Deleted value: %d\n", temp->data);
    free(temp); 
}

// --- 3. Display the List ---
void displayList() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node *current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next; // Move to the next node
    }
    printf("NULL\n");
}

int main() {
    printf("--- Linked List Operations ---\n");
    displayList(); // Check empty list

    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    displayList(); // Output: 10 -> 20 -> 30 -> NULL

    deleteFromBeginning(); // Deletes 10
    displayList(); // Output: 20 -> 30 -> NULL

    insertAtEnd(40);
    displayList(); // Output: 20 -> 30 -> 40 -> NULL

    deleteFromBeginning(); // Deletes 20
    deleteFromBeginning(); // Deletes 30
    deleteFromBeginning(); // Deletes 40
    deleteFromBeginning(); // Check empty list deletion
    displayList();
    
    return 0;
}  