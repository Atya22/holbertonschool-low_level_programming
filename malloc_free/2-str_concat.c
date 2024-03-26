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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < s1[i]; i++)
		;
	for (j = 0; j < s2[j]; j++)
		;

	char *s = (char *)malloc((i + j + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		S[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
