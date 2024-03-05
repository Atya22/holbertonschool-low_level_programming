#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memset-  function fills the first n bytes of the memory area pointed to by s with the constant byte b
*
*@s:pointer to the block memory
*@b-the value to be set
*@n-number of bytes to be set
*Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
