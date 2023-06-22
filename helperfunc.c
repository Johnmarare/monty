#include "monty.h"

/**
 * check_argument - check for aguments
 * @op_code: arguments expected
 * Return: 1 for success else 0
 */
int check_argument(char *op_code)
{
	char *codes[] = {"push"};
	int i;

	for (i = 0; codes[i] != NULL; i++)
	{
		if (strcmp(op_code, codes[i]) == 0)
		{
			return (1);
		}
	}
	return (0);
}
/**
 * to_number - check if is a digit
 * @num: the number to be converted
 * Return: 1 for success, 0 for fail
 */
int to_number(int *num)
{
	char *tmp;
	char **args;

	args = *info._arguments;

	if (args[1] == NULL)
	{
		return (0);
	}

	for (tmp = args[1]; *tmp != '\0'; tmp++)
	{
		if (*tmp == '-' || *tmp == '+')
		{
			continue;
		}
		if (isdigit(*tmp) == 0)
		{
			return (0);
		}
	}
	*num = atoi(args[1]);
	return (1);
}
