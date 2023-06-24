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

/**
 * _pchar - swap last two numbers
 * @head: head of the list
 * @line_number: line_number
 * Return: Nothing
 */
void _pchar(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1, 1, 1, 1, 1);
		pchar_error();
	}

	if ((*info.tail_list)->n < 32 && (*info.tail_list)->n > 126)
	{
		free_all(1, 1, 1, 1, 1);
		pchar_error_2();
	}

	if (strcmp(info.type, "stack") == 0)
		s_pchar(head);
	else
		q_pchar(head);
}
/**
 * print_string - print all elements in the list
 * @head: head of the list
 * @line_number: line_number
 * Return: Nothing
 */
void pstr(stack_t **head, unsigned int line_number)
{
	(void) line_number;
	if (info.len == 0)
	{
		printf("\n");
		return;
	}

	if (strcmp(info.type, "stack") == 0)
		s_print_string(head);
	else
		q_print_string(head);
}
/**
 * _rot - rotates stack to top
 * @head: head of list
 * @line_number: line number
 * Return: void
 */
void _rot(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL;
	top->prev = bottom;

	(void)line_number;
}
