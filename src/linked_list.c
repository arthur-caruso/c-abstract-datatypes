#include "linked_list.h"

void print_list(node_t *head) {
	node_t *temp = head;
	printf("{");
	while (temp->next != NULL) {
		printf("%d, ", temp->value);
		temp = temp->next;
	}
	printf("%d}", temp->value);
}

node_t *create_node(int value) {
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}

int delete_node(node_t *head, node_t *node_del) {
	node_t *temp = head;
	node_t *prev = NULL;
	while (temp != node_del) {
		prev = temp;
		if (temp == NULL) return 1;
		else temp = temp->next;
	}
	prev->next = node_del->next;
	free(node_del);
	return 0;
}

int insert_at_head(node_t **head, node_t *node_nsrt) {
	node_nsrt->next = *head;
	*head = node_nsrt;
	return 0;
}

int insert_at_tail(node_t *head, node_t *node_nsrt) {
	node_t *temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node_nsrt;
	node_nsrt->next = NULL;
	return 0;
}

node_t *find_node(node_t *head, int value) {
	node_t *temp = head;
	while (temp != NULL) {
		if (temp->value == value) return temp;
		else temp = temp->next;
	}
	return NULL;
}
