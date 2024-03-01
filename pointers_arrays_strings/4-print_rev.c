#include"main.h"
#include <string.h>

/**
*print_rev - function that prints a string, in reverse, followed by a new line
*
*@s - string to be printed in reverse
*Return: Always 0.
*/

void print_rev(char *s)
{
	int j;
	int lenght = strlen(s);

	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}



