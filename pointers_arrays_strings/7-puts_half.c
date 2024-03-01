#include<string.h>
#include"main.h"
/**
*puts_half - prints half of a string, followed by a new line.
*@str: var
*
* Return: Always 0.
*/

void puts_half(char *str)
{
	int i = strlen(str);
	int start = (i - 1) / 2 + 1;
	int j;

	for (j = start; j < i; j++)
	{
		_putchar(str[j]);

	}
	_putchar('\n');
}
