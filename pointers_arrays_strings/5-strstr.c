#include "main.h"

/**
*_strstr - function that that locates a substring
*@haystack: holds value
*@needle: holds value
*Return: Always 0.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);
			}
		}
	}
	return (NULL);
}
