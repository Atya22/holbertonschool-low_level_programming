#include "main.h"

/**
* _strdup - duplicate a string
* @str: string to be duplicated.
* Return: pointer to the duplicated string, or NULL if insufficient memory
* was available.
*/

char *_strdup(char *str)
{
	char *tmp;
	size_t len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	tmp = malloc(len * sizeof(char));

	if (tmp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int) len; i++)
	{
		tmp[i] = str[i];
	}

	tmp[i] = '\0';
	return (tmp);
}
