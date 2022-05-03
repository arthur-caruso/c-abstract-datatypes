#include "linked_list.h"

void print_list(node_t *head) {
	node_t *tmp = head;
	printf("{");
	while (tmp->next != NULL) {
		printf("%d, ", tmp->value);
		tmp = tmp->next;
	}
	printf("%d}", tmp->value);
}

node_t *create_node(int value) {
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}

int delete_node(node_t *head, node_t *del_node) {
	node_t *tmp = head;
	node_t *aux = del_node;
	node_t *prv = NULL;
	while (aux != tmp) {
		prv = tmp;
		tmp = tmp->next;
		if (tmp == NULL) return 0;
	}
	prv->next = aux->next;
	free(aux);
	return 1;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert) {
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

node_t *insert_at_tail(node_t *head, node_t *node_to_insert) {
	node_t *tmp = head;
	while (tmp->next != NULL) tmp = tmp->next;
	tmp->next = node_to_insert;
	node_to_insert->next = NULL;
	return node_to_insert;
}

node_t *find_node(node_t *head, int value) {
	node_t *tmp = head;
	while (tmp != NULL) {
		if (tmp->value == value) return tmp;
		tmp = tmp->next;
	}
	return NULL;
}
