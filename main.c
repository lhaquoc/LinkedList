#include  <stdlib.h>
#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

typedef struct node node_t;

void print_list(node_t *head) {
    node_t *temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node_t *create_new_node(int value) {
    node_t *resullt = malloc(sizeof(node_t));
    resullt->value = value;
    resullt->next = NULL;
    return resullt;
}

node_t *insert_at_head(node_t *head, node_t *node_to_insert) {
    node_to_insert->next = head;
    return node_to_insert;
}

int main(void) {
    node_t *head = NULL;
    node_t *tmp;

    for(int i = 0; i < 25; i++) {
        tmp = create_new_node(i);
        head = insert_at_head(head, tmp);
    }

    print_list(head);

    return 0;
}
