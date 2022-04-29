#include "linear_stack.h"

int main() {
	stack s1, s2, s3;

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

	return 0;
}
