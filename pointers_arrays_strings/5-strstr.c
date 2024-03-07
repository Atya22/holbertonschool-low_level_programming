#include "main.h"
#include <stdio.h>

/**
*_strstr - function that searches a string for any of a set of bytes
*@haystack: holds value
*@needle: holds value
*Return: Always 0.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

return (NULL);
}
