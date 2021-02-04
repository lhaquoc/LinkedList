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
    //

    return resullt;
}

node_t *insert_at_head(node_t *head, node_t *node_to_insert) {
    node_to_insert->next = head;
    return node_to_insert;
}

node_t *find_a_node(node_t *head, int value) {
    node_t *temp = head;
    while (temp != NULL)
    {
        if(temp->value == value)
            return temp;
        temp = temp->next;
    }
    return NULL;
}
void insert_after_node(node_t *node_to_insert_after, node_t *new_node) {
    new_node->next = node_to_insert_after->next;
    node_to_insert_after->next = new_node;
}
int main(void) {
    node_t *head = NULL;
    node_t *temp;

    for(int i = 0; i < 25; i++) {
        temp = create_new_node(i);
        head = insert_at_head(head, temp);
    }

    temp = find_a_node(head, 13);
    printf("Found node with value %d\n", temp->value);
    
    insert_after_node(temp, create_new_node(99));

    print_list(head);
    return 0;
}
