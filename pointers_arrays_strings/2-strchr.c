#include "main.h"

/**
*_strchr - function
*@s:var
*@c:var
*
*Return: Always 0.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
		return ("");
	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
