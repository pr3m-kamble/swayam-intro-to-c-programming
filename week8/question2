#include <stdio.h>
#include <stdlib.h>

struct node{
    int id;
    int priority;
    struct node *next;
}; 

struct node * create_node(int id, int val) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->id = id;
    new_node->priority = val;
    new_node->next = NULL;
    return new_node;
}

struct node * append(struct node * list, struct node * e) {
    e->next = list;
    return e;
}

struct node * search(struct node * list, int id) {
    struct node *current = list;
    while (current != NULL) {
        if (current->id == id)
            return current;
        current = current->next;
    }
    return NULL;
}

void change_priority(struct node * list, int id, int val) {
    struct node *current = list;
    while (current != NULL) {
        if (current->id == id) {
            current->priority = val;
            return;
        }
        current = current->next;
    }
}

struct node * extract_max(struct node * list) {
    struct node *max_prev = NULL;
    struct node *max_node = list;
    struct node *prev = NULL;
    struct node *current = list;

    // Find the node with maximum priority
    while (current != NULL) {
        if (current->priority > max_node->priority) {
            max_node = current;
            max_prev = prev;
        }
        prev = current;
        current = current->next;
    }

    // Remove the maximum priority node from the list
    if (max_prev != NULL)
        max_prev->next = max_node->next;
    else
        list = max_node->next;

    // Print the id of the extracted node
    printf("Max: %d\n", max_node->id);

    // Free the memory occupied by the extracted node
    free(max_node);

    return list;
}

int main() {
    struct node *list = NULL;
    char operation;
    int id, val;

    while (1) {
        scanf(" %c", &operation);
        if (operation == 'A') {
            scanf("%d %d", &id, &val);
            struct node *new_node = create_node(id, val);
            list = append(list, new_node);
        } else if (operation == 'C') {
            scanf("%d %d", &id, &val);
            change_priority(list, id, val);
        } else if (operation == 'S') {
            scanf("%d", &id);
            struct node *result = search(list, id);
            if (result != NULL)
                printf("%d %d\n", result->id, result->priority);
            else
                printf("%d -1\n", id);
        } else if (operation == 'M') {
            if (list != NULL)
                list = extract_max(list);
        } else if (operation == 'E') {
            break;
        }
    }

    // Free the memory occupied by the remaining nodes in the list
    struct node *current = list;
    while (current != NULL) {
        struct node *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
