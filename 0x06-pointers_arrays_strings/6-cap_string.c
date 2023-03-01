/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	/* capitalize first character if it's a letter */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 'a' - 'A';

	/* loop through the string */
	for (i = 1; s[i] != '\0'; i++)
	{
		/* capitalize if it's a letter and previous char is a separator */
		if ((s[i] >= 'a' && s[i] <= 'z') &&
		    (s[i - 1] == '\0' || strchr(separators, s[i - 1]) != NULL))
			s[i] -= 'a' - 'A';
	}

	return s;
}