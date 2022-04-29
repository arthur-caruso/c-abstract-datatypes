#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5
#define STACK_EMPTY INT_MIN
#define EMPTY (-1)

typedef struct node {
	int value;
	struct node* next;
} node_t;

typedef node_t *stack;
bool push(stack *stack_p, int value);
int pop(stack *stack_p);
