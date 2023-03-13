#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 *
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: A pointer to a new string, or NULL if it fails
 * Each argument should be followed by a '\n' in the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		len++; /* account for '\n' */
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
