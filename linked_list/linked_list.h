#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
} node_t;

void print_list(node_t *head);
node_t *create_node(int value);
int delete_node(node_t *head, node_t *node_del);
int insert_at_head(node_t **head, node_t *node_nsrt);
int insert_at_tail(node_t *head, node_t *node_nsrt);
node_t *find_node(node_t *head, int value);
