#include "monty.h"
/**
 * free_dlistint - free list
 * Return: void
 */
void free_dlistint(void)
{
	stack_t *temp, *head;

	temp = *info.head_list;
	head = *info.head_list;

	while (head && head->next)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(temp);
	head = NULL;
}
