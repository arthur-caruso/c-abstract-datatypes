#include <stdlib.h>
#include <stdio.h>

#include "linear_stack.h"
#include "linked_stack.h"
#include "linked_list.h"

int main() {
	/*
	 * linear stack
	 */
	linear_stack s1, s2, s3;
	s1.top = EMPTY;
	s2.top = EMPTY;
	s3.top = EMPTY;
	push(&s1, 56);
	push(&s2, 1);
	push(&s2, 2);
	push(&s2, 3);
	push(&s3, 245);
	int t;
	while ((t = pop(&s2)) != STACK_EMPTY)
		printf("t -> %d\n", t);

	/*
	 * linked stack
	 */
	node_t* z1, z2, z3;
	z1 = NULL;
	z2 = NULL;
	z3 = NULL;
	push(&z1, 56);
	push(&z2, 1);
	push(&z2, 2);
	push(&z2, 3);
	push(&z3, 245);
	int t;
	while ((t = pop(&z2)) != STACK_EMPTY)
		printf("t -> %d\n", t);

	/*
	 * linked list
	 */
	node_t* head = NULL;
	node_t* tmp;
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
