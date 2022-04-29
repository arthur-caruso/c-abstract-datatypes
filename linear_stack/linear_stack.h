#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define STACK_LENGTH 5
#define STACK_EMPTY INT_MIN
#define EMPTY (-1)

typedef struct {
	int values[STACK_LENGTH];
	int top;
} stack;

bool push(stack *stack_p, int value);
int pop(stack *stack_p);
