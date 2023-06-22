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
