#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
} node_t;

void print_list(node_t *head);
node_t *create_node(int value);
int delete_node(node_t *head, node_t *del_node);
node_t *insert_at_head(node_t **head, node_t *node_to_insert);
node_t *insert_at_tail(node_t *head, node_t *node_to_insert);
node_t *find_node(node_t *head, int value);
