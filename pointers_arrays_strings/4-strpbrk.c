#include "main.h"
#include <limits.h>
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
	int min = INT_MAX;

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

	if (min == INT_MAX)
	{
		return (NULL);
	}
	else
	{
		return (s + min);
	}
}

