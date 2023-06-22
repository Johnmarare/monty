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
/**
 * q_pint - qpint
 * @head: head of list
 * Return: void
 */
void q_pint(stack_t **head)
{
	printf("%d\n", (*head)->n);
}
/**
 * q_pop - pop command in queue
 * @head: head of list
 * Return: void
 */
void q_pop(stack_t **head)
{
	stack_t *current;

	current = *head;
	current->prev = NULL;
	free(*head);
	*head = current;
}
