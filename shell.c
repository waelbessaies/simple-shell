#include "shell.h"
/**
* loop - simple shell
*
* Return: 0
*/
void loop(void)
{
	char *line;
	char **args;
	int status;

do	{
	line = read_line();
	args = split_line(line);
	status = execute(args);

	free(line);
	free(args);
	} while (status);
}
