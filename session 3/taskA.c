#include <stdio.h>


struct Node {
    int value;
    struct Node *next;
};


struct Node *create_node(int value) {
    struct Node *new_node = malloc(sizeof(struct Node));
    if (!new_node) return NULL;
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}


void add_node_end(struct Node **head, int value) {
    struct Node *new_node = create_node(value);
    if (!*head) {
        *head = new_node;
        return;
    }
    struct Node *temp = *head;
    while (temp->next) 
        temp = temp->next;
    temp->next = new_node;
}


void print_list(struct Node *head) {
    while (head) {
        printf("%d -> ", head->value);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    add_node_end(&head, 10);
    add_node_end(&head, 20);
    add_node_end(&head, 30);

    print_list(head);

    return 0;
}
