#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes.
*@s: holds value
*@accept: holds value
*Return: always 0.
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int min = strlen(s);

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j < min)
				{
					min = j;
				}
			}
		}
	}

	if (min == strlen(s))
	{
		return (NULL);
	}
	else
	{
		return (s + min);
	}
}

