#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char tmp;

/* Find the end of the string */
while (s[j] != '\0')
j++;

j--;

/* Swap characters from start to end of the string */
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}