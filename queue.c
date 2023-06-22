#include "monty.h"
#include "queue.h"

/**
 * q_pall - queue print all command
 * @head: head of list
 * Return: void
 */
void q_pall(stack_t **head)
{
	stack_t *h;

	for (h = *head; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
	}
}
