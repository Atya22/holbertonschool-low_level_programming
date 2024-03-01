#include"main.h"
#include <string.h>

/**
*print_rev - function that prints a string, in reverse, followed by a new line
*
*@s: string to be printed in reverse
*Return: Always 0.
*/

void print_rev(char *s)
{
	int j;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}



