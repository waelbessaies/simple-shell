#include "shell.h"
/**
*
*
* Return: print the enviroment variable
*/

int main(int argc, char **argv, char **envp)

{

for (char **env = envp; *env != 0; env++)
	{
		char *thisEnv = *env;
		printf("%s\n", thisEnv);
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

