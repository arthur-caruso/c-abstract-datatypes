#include "linked_list.h"

int main() {
	node_t *head = NULL;
	node_t *tmp;
	int value;

	// adding some values into the list
	for (int i = 0; i < 10; i++) {
		// simultaneously adding nodes with values
		// from 0 to 9 at head and tail of list
		value = i;
		tmp = create_node(value);
		insert_at_head(&head, tmp);
		tmp = create_node(value);
		insert_at_tail(head, tmp);
	}

	// creating a node with value 68 at tail of list
	value = 68;
	tmp = create_node(value);
	insert_at_tail(head, tmp);

	// printing list
	print_list(head);
	printf("\n");

	// searching vor value 68 on list
	tmp = find_node(head, value);
	if (tmp != NULL)
		printf("found node of value %d at address %p\n", tmp->value, tmp);
	else
		printf("could not locate node of value %d\n", value);

	// demonstrating deletion of node
	if (delete_node(head, tmp + 1)) // tmp + 1 does not point to a node
		printf("could not delete node of address %p\n", tmp + 1);
	else printf("successfully deleted node of address %p\n", tmp + 1);

	if (delete_node(head, tmp)) // tmp points to node of value 68
		printf("could not delete node of address %p\n", tmp);
	else printf("successfully deleted node of address %p\n", tmp);

	// searching vor value 68 on list, once again
	tmp = find_node(head, value);
	if (tmp != NULL)
		printf("found the node %p with value %d\n", tmp, tmp->value);
	else
		printf("could not locate node of value %d\n", value);

	// printing list
	print_list(head);
	printf("\n");

	return 0;
}
