#include "monty.h"
#include "stack.h"
#include "queue.h"

/**
 * s_print_string - s_print_all command
 * @head: head of the list
 * Return: Nothing
 */
void s_print_string(stack_t **head)
{
	stack_t *tail;
	(void) head;

	tail = *info.tail_list;

	if (tail == NULL)
		printf("\n");
	while (tail)
	{
		if ((tail->n < 32 || tail->n > 126) || tail->n == 0)
			break;
		printf("%c", tail->n);
		tail = tail->prev;
	}
	if (tail != NULL || info.len == 1)
		printf("\n");
}
