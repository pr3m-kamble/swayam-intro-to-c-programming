#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
void insertAtEnd(struct Node** head, struct Node** tail, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = *tail = newNode;
    } else {
        (*tail)->next = newNode;
        newNode->prev = *tail;
        *tail = newNode;
    }
}

// Function to remove the first occurrence of a node with given data
void removeData(struct Node** head, struct Node** tail, int data) {
    if (*head == NULL)
        return;

    struct Node* current = *head;

    // Traverse the list to find the node with the given data
    while (current != NULL) {
        if (current->data == data) {
            // If the node to be deleted is the head
            if (current == *head) {
                *head = current->next;
                if (*head != NULL)
                    (*head)->prev = NULL;
                else
                    *tail = NULL;
            } else {
                // If the node to be deleted is in the middle or at the end
                current->prev->next = current->next;
                if (current->next != NULL)
                    current->next->prev = current->prev;
                else
                    *tail = current->prev;
            }
            free(current);
            return;
        }
        current = current->next;
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int N, data, M;
    
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &data);
        insertAtEnd(&head, &tail, data);
    }

    scanf("%d", &M);

    // Remove the first occurrence of M from the list
    removeData(&head, &tail, M);

    // Print the remaining list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL)
            printf(",");
        current = current->next;
    }
    printf("\n");

    // Free the memory allocated for the nodes
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
