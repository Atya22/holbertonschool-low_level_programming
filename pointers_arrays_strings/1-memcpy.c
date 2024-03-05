#include "main.h"
/**
*char *_memcpy - function
*@dest:var
*@src:var
*@n:var
*Return: always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

