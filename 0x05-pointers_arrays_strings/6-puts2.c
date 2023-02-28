#include <stdio.h>

/**
 * puts2 - prints every other char of a string
 * starting with the first char, followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int x, i;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}