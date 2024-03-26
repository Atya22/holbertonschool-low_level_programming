#include "main.h"

/**
* _strdup - duplicate a string
* @str: string to be duplicated.
* Return: pointer to the duplicated string, or NULL if insufficient memory
* was available.
*/

char *_strdup(char *str)
{
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	char *s = (char *)malloc((i + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';

	return (s);
}


