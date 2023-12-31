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
/**
 * s_div - division command
 * @head: head of the list
 * Return: void
 */
void s_div(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b / a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;

}
/**
 * s_mul - add command
 * @head: head of the list
 * Return: Nothing
 */

void s_mul(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b * a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;

}

/**
 * s_mod - add command
 * @head: head of the list
 * Return: Nothing
 */
void s_mod(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b % a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;
}

/**
 * s_pchar - add command
 * @head: head of the list
 * Return: Nothing
 */
void s_pchar(stack_t **head)
{
	stack_t *tail;
	int a;
	(void) head;
	tail = *info.tail_list;
	a = tail->n;
	printf("%c\n", a);
}

