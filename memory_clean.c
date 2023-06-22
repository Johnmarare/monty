#include "monty.h"
/**
 * free_ - free 2d array
 * @parsed_buff: arrray to free
 * Return: void
 */
void free_(char **parsed_buff)
{
	int j;

	for (j = 0; parsed_buff[j] != NULL; j++)
	{
		free(parsed_buff[j]);
	}
	free(parsed_buff);
}
/**
 * free_2_ -free 2d array
 * @parsed_buff: array to free
 * Return: void
 */
void free_2_(char ***parsed_buff)
{
	if (*parsed_buff != NULL)
	{
		free_(*parsed_buff);
	}
	*parsed_buff = NULL;
}
/**
 * mall_c - allocates space for 3 pointers.
 * @a: perfoms free on specific cases
 * Return: a pointer to a space in heap
 */
char **mall_c(int a)
{
	char **_arguments;

	_arguments = malloc(3 * sizeof(char *));
	if (_arguments == NULL)
	{
		if (a == 1)
		{
			free_all(1, 1, 1, 1, 1);
		}
		if (a == 2)
		{
			free_all(0, 0, 0, 1, 1);
		}
		malloc_error();
	}
	return (_arguments);
}
/**
 * free_all - free heap
 * @a: case _argumnets
 * @b: case cpy_line
 * @c: case _file
 * @d: case buffer-line
 * @e: case list
 * Return: void
 */
void free_all(int a, int b, int c, int d, int e)
{
	if (info._arguments != NULL && a == 1)
	{
		free_2_(info._arguments), free(*info._arguments), *info._arguments = NULL;
	}
	if (info.cpy_line != NULL && b == 1)
	{
		free(info.cpy_line), info.cpy_line = NULL;
	}
	if (info._file != NULL && c == 1)
	{
		fclose(info._file), info._file = NULL;
	}
	if (info.buffer_line != NULL && d == 1)
	{
		free(info.buffer_line), info.buffer_line = NULL;
	}
	if (info.head_list != NULL && e == 1)
	{
		free_dlistint();
	}
}
/**
 * fill_info - fill struct
 * @_arguments: array to free
 * @_file: opened file
 * @buffer_line: line taken from file
 * @cpy_line: copy of buffer line
 * Return: void
 */
void fill_info(char ***_arguments, FILE **_file,
		char **buffer_line, char **cpy_line)
{
	if (info._arguments == NULL)
	{
		info._arguments = _arguments;
	}
	info._file = *_file;
	info.buffer_line = *buffer_line;
	info.cpy_line = *cpy_line;
}
