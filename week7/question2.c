#include <stdio.h>
#include <stdlib.h>

struct node {
    int id;
    int priority;
    struct node *next;
};

struct node *create_node(int id, int val) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->id = id;
    new_node->priority = val;
    new_node->next = NULL;
    return new_node;
}

struct node *append(struct node *list, struct node *e) {
    if (list == NULL) {
        return e;
    }
    e->next = list;
    return e;
}

struct node *search(struct node *list, int id) {
    struct node *ptr = list;
    while (ptr != NULL) {
        if (ptr->id == id) {
            return ptr;
        }
        ptr = ptr->next;
    }
    return NULL;
}

void change_priority(struct node *list, int id, int val) {
    struct node *ptr = list;
    while (ptr != NULL) {
        if (ptr->id == id) {
            ptr->priority = val;
            return;
        }
        ptr = ptr->next;
    }
}

int main() {
    struct node *list = NULL;
    char op;
    int id, val;

    while (1) {
        scanf(" %c", &op);
        if (op == 'E') {
            break;
        }
        switch (op) {
            case 'A':
                scanf("%d %d", &id, &val);
                list = append(list, create_node(id, val));
                break;
            case 'C':
                scanf("%d %d", &id, &val);
                change_priority(list, id, val);
                break;
            case 'S':
                scanf("%d", &id);
                struct node *result = search(list, id);
                if (result != NULL) {
                    printf("%d %d\n", result->id, result->priority);
                } else {
                    printf("%d -1\n", id);
                }
                break;
            default:
                printf("Invalid operation\n");
                break;
        }
    }

    return 0;
}
