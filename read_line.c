#include "shell.h"
/**
 * read_line - reads user input
 * Return: line
 */
char cmd_read_line(void)
{
	{
		char *line = NULL;
		size_t len = 0;
		size_t read;

		read = getline(&line, &len, stdin);
		if (read < 0)
		{
			free(line);
			perror("error");
			exit(EXIT_SUCCESS);
		}


		return (line);
	}
}