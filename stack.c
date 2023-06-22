#include "monty.h"
#include "stack.h"

/**
 * s_pall - stack print all
 * @head: head of list
 * Return: void
 */
void s_pall(stack_t **head)
{
	stack_t *tail;
	(void) head;

	if (info.state == 1)
	{
		tail = *info.head_list;
		if (tail == NULL)
		{
			return;
		}
		while (tail->next != NULL && tail)
		{
			printf("%d\n", tail->n);

			tail = tail->next;
		}
		if (tail != NULL)
		{
			printf("%d\n", tail->n);
		}
	}
	else if (info.state == 0)
	{
		tail = *info.tail_list;
		if (tail == NULL)
		{
			return;
		}
		while (tail->prev != NULL && tail)
		{
			printf("%d\n", tail->n);

			tail = tail->prev;
		}
		if (tail != NULL)
		{
			printf("%d\n", tail->n);
		}
	}
}
/**
 * s_pint - pint stack command
 * @head: head of the list
 * Return: void
 */
void s_pint(stack_t **head)
{
	stack_t *tail;

	tail = *head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	printf("%d\n", tail->n);
}
/**
 * s_pop - pop command
 * @head: head of list
 * Return: void
 */
void s_pop(stack_t **head)
{
	stack_t *s_last;
	(void) head;

	if (info.len == 1)
	{
		free(*info.tail_list), *info.tail_list = NULL;
		*info.head_list = NULL;
		return;
	}
	s_last = (*info.tail_list)->prev;
	if (s_last != NULL)
	{
		s_last->next = NULL;
	}
	free(*info.tail_list);
	*info.tail_list	= s_last;
}
