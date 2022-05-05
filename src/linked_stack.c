#include "linked_stack.h"

bool push_node(stack *stack_p, int value) {
	node_t *result = malloc(sizeof(node_t));
	if (result == NULL)
		return false;
	result->value = value;
	result->next = *stack_p;
	*stack_p = result;
	return true;
}

int pop_node(stack *stack_p) {
	if (*stack_p == NULL)
		return STACK_EMPTY;
	int result = (*stack_p)->value;
	node_t *tmp = *stack_p;
	*stack_p = (*stack_p)->next;
	free(tmp);
	return result;
}
