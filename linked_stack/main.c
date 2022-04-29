#include "linked_stack.h"

int main() {
	stack z1, z2, z3;

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

	return 0;
}
