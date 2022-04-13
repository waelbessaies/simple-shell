#include "shell.h"
/**
* imp_env - function prints env variable
* @args : command passed by the user
* Return: print the enviroment variable
*/

int imp_env(char **args)
{
	int i;
	int len;

	for (i = 0; environ[i] != NULL; i++)
	{
		len = strlen(environ[i]);
		write(1, environ[i], len);
		write(1, "\n", 1);
	}
		return (0);
}

/**
*imp_exit - exit command
*@args : command passed by the user
*Return: exit command
*/
int imp_exit(char **args)
{
	return (0);
}

