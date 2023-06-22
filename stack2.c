#include "monty.h"
#include "stack.h"
#include "queue.h"
/**
 * s_sub - sub command
 * @head: head of the list
 * Return: void
 */
void s_sub(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b - a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;
}
