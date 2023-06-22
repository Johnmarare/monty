#include "monty.h"
/**
 * main - entry point
 * @argc: number of aguments in console
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	FILE *_file;

	stack_t *head_list, *tail_list;

	head_list = NULL, tail_list = NULL;
	info.head_list = &head_list;
	info.tail_list = &tail_list;

	/*intitizle heap*/
	initialize_heap();
	if (argc != 2)
		number_arguments_error();
	/*file handling*/
	_file = fopen(argv[1], "r");
	if (_file == NULL)
		file_error(argv[1]);
	/*execute*/
	info._file = _file;
	execute_file();

	return (0);
}
