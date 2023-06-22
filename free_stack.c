#include "monty.h"
/**
 * free_stack - frees stack
 * @stack: stack to be freed
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *temp;

	while (*stack != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}
