#include "monty.h"
#include "stack.h"
#include "queue.h"
/**
 * swap - swap last two numbers
 * @head: head of the list
 * @line_number: line_number
 * Return: void
 */
void swap(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len < 2)
	{
		free_all(1, 1, 1, 1, 1);
		swap_error();
	}

	if (strcmp(info.type, "stack") == 0)
	{
		s_swap(head);
	}
	else
	{
		q_swap(head);
	}
}
/**
 * add - add last two elements
 * @head: head of list
 * @line_number: line_number
 * Return: void
 */
void add(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len < 2)
	{
		free_all(1, 1, 1, 1, 1);
		add_error();
	}
	if (strcmp(info.type, "stack") == 0)
	{
		s_add(head);
	}
	else
	{
		q_add(head);
	}
}
/**
 * nop - does nothing
 * @head: head of list
 * @line_number: line_number
 * Return: void
 */
void nop(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}
