// Implementing a program to insert a node at the end of a singly linked list


#include <stdio.h>
#include <stdlib.h>

// Definition of a structure to represent a node in the linked list
struct Node {
    int data;              // Integer data to store the value in the node
    struct Node* next;     // Pointer to the next node in the list
};

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head_ref, int new_data) {
    // Allocate memory for the new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // Assign the data to the new node
    new_node->data = new_data;
    
    // New node will be the last, so set its next to NULL
    new_node->next = NULL;

    // If the linked list is empty, make the new node the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Otherwise, traverse to the last node
    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }

    // Make the last node's next point to the new node
    last->next = new_node;
}

// Function to display the elements of the linked list
void display(struct Node* ptr) {
    // Loop through the list until we reach the end (NULL)
    while (ptr != NULL) {
        // Print the data of the current node
        printf("%d -> ", ptr->data);
        
        // Move to the next node
        ptr = ptr->next;
    }
    printf("NULL\n"); // End of the list
}

int main() {
    // Initialize the head of the list as NULL (empty list)
    struct Node* head = NULL;

    // Insert elements at the end of the list
    insertAtEnd(&head, 10);  // List: 10 -> NULL
    insertAtEnd(&head, 20);  // List: 10 -> 20 -> NULL
    insertAtEnd(&head, 30);  // List: 10 -> 20 -> 30 -> NULL
    insertAtEnd(&head, 40);  // List: 10 -> 20 -> 30 -> 40 -> NULL

    // Display the linked list
    display(head);

    return 0;  
}
