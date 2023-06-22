#include "monty.h"
#include "stack.h"
#include "queue.h"
/**
 * push - pushes an element to stack
 * @stack: stack
 * @line_number: number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	int i;
	(void) line_number;

	if (check_argument("push") != 1 || to_number(&i) != 1)
	{
		invalid();
	}
	add_dnodeint_end(stack, i);
}
/**
 * pall - print all values on stack
 * @stack: points to stack
 * @line_number: num
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (strcmp(info.type, "stack") == 0)
	{
		s_pall(stack);
	}
	else
	{
		q_pall(stack);
	}
}
