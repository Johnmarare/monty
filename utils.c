#include "monty.h"
/**
 * is_empty - check for blank line
 * @s: string to check
 * Return: on success 1, failure 0
 */
int is_empty(char *s)
{
	while (*s != '\0')
	{
		if (is_space((unsigned char)*s) == 0)
		{
			return (0);
		}
		s++;
	}
	return (1);
}
/**
 * is_space - checks for delimeters
 * @c: character to evaluate
 * Return: 1 for success, 0 for failure
 */
int is_space(int c)
{
	return (c == '\t' || c == '\n' || c == '\v' ||
			c == '\f' || c == '\r' || c == ' ' ? 1 : 0);
}
/**
 * ft_strdup - allocate some space
 * @s: string to be copied
 * Return: pointer to heap
 */
char *ft_strdup(char *s)
{
	char *str, *p;
	int len = 0;

	while (s[len])
	{
		len++;
	}
	str = malloc(len + 1);
	if (str == NULL)
	{
		malloc_error();
	}
	p = str;
	while (*s)
	{
		*p++ = *s++;
	}
	*p = '\0';
	return (str);
}
