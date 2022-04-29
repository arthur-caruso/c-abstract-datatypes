#include "linear_stack.h"

bool push(stack *stack_p, int value) {
	if (stack_p->top >= STACK_LENGTH - 1)
		return false;
	stack_p->top++;
	stack_p->values[stack_p->top] = value;
	return true;
}

int pop(stack *stack_p) {
	if (stack_p->top == EMPTY)
		return STACK_EMPTY;
	int result = stack_p->values[stack_p->top];
	stack_p->top--;
	return result;
}
