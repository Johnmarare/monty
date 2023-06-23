#include "monty.h"
#include "stack.h"
#include "queue.h"


/**
 * _mod - swap last two numbers
 * @head: head of the list
 * @line_number: line_number
 * Return: Nothing
 */
void _mod(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len < 2)
	{
		free_all(1, 1, 1, 1, 1);
		mod_error();
	}
	if ((*info.tail_list)->n == 0)
	{
		free_all(1, 1, 1, 1, 1);
		div_error_2();
	}

	if (strcmp(info.type, "stack") == 0)
	{
		s_mod(head);
	}
	else
	{
		q_mod(head);
	}
}
