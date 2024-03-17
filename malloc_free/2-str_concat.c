#include "main.h"
/**
* str_concat - function to concate 2 arry
* @s1: first string
* @s2: second string
* Return: null or a pointer to s
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, a = 0;
	char *c;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; i < s1[i]; i++)
		;
	for (j = 0; j < s2[j]; j++)
		;
	c = malloc((sizeof(char) * i) + (sizeof(char) * j) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		c[a] = *s1;
		s1++;
		a++;
	}

	while (*s2 != '\0')
	{
		c[a] = *s2;
		s2++;
		a++;
	}
	c[a] = '\0';

	return (c);
}























