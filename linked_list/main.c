#include "linked_list.h"

int main() {
	node_t *head = NULL;
	node_t *tmp;

	for (int i = 0; i < 10; i++) {
		tmp = create_node(i);
		insert_at_head(&head, tmp);
		tmp = create_node(i);
		insert_at_tail(head, tmp);
	}

	tmp = create_node(69);
	insert_at_tail(head, tmp);
	tmp = find_node(head, 69);

	printf("found the node %p with value %d\n", tmp, tmp->value);
	print_list(head);
	printf("\n");

	return 0;
}
