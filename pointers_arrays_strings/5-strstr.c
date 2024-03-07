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
	int n_length;
	int i;
	int j;
	int found = 0;

	for (n_length = 0; needle[n_length] != '\0'; n_length++)
		;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == '\0')
			{
				return (NULL);
			}
			else if (needle[j] == haystack[i])
			{
				i++;
				found++;

				if (found == n_length)
				{
					return (needle + (i - n_length));
				}
			}
			else
			{
				found = 0;
				break;
			}
		}
	}
	return (NULL);
}
