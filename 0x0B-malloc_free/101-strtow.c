#include <stdlib.h>
#include <string.h>

#define DELIMITER " "

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words of.
 *
 * Return: The number of words in @str.
 */
static int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If successful - a pointer to an array of words; otherwise - NULL.
 */
char **strtow(char *str)
{
	char **words, *word;
	int i, j, k, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; i < count; i++)
	{
		while (*str == ' ')
			str++;

		word = str;
		while (*str && *str != ' ')
			str++;

		words[j] = malloc(sizeof(char) * ((str - word) + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);

			free(words);
			return (NULL);
		}

		strncpy(words[j], word, (str - word));
		words[j][(str - word)] = '\0';
		j++;
	}

	words[j] = NULL;
	return (words);
}
