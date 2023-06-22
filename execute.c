#include "monty.h"
/**
 * initialize_heap - function to initialize variables
 * Return: void
 */
void initialize_heap(void)
{
	info.type = "stack";
	info.len = 0;
	info.line_number = 1;
	info._arguments = NULL;
	info.cpy_line = NULL;
	info._file = NULL;
	info.buffer_line = NULL;
	info.state = 0;
}
/**
 * execute_file - function to executes file
 * Return: void
 */
void execute_file(void)
{
	char *buffer_line;
	size_t nbytes;

	buffer_line = NULL, nbytes = 0;
	while (1)
	{
		if (getline(&buffer_line, &nbytes, info._file) == EOF)
		{
			free_all(1, 1, 1, 1, 1);
			break;
		}
		if (buffer_line != NULL)
		{
			if (is_empty(buffer_line) == 1)
			{
				info.line_number++;
				continue;
			}
			info.buffer_line = buffer_line;
			execute_line_();
		}
	}
}
/**
 * execute_line_ - executes line of the file
 * Return: void
 */
void execute_line_(void)
{
	char *cpy_line, **_arguments;
	void (*f)(stack_t **, unsigned int);

	_arguments = mall_c(2);
	cpy_line = ft_strdup(info.buffer_line);
	parser(cpy_line, _arguments);

	info._arguments = &_arguments;
	info.cpy_line = cpy_line;

	f = get_format(_arguments[0]);
	if (f == NULL)
	{
		unknown_ins();
	}
	f(info.head_list, info.line_number);
	info.line_number++;
	free_all(1, 1, 0, 0, 0);
	info._arguments = NULL;
	info.cpy_line = NULL;
}
