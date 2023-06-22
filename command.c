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
	(void) stack;

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
/**
 * pint - prints the value at top of stack
 * @stack: points to heap
 * @line_number: number
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1, 1, 1, 1, 1);
		pint_error();
	}

	if (strcmp(info.type, "stack") == 0)
	{
		s_pint(stack);
	}
	else
	{
		q_pint(stack);
	}
}
/**
 * pop - deletes stack
 * @line_number: number
 * @head: head of the list
 * Return: void
 */
void pop(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1, 1, 1, 1, 1);
		pop_error();
	}
	if (strcmp(info.type, "stack") == 0)
	{
		s_pop(head);
	}
	else
	{
		q_pop(head);
	}
	info.len--;
}

