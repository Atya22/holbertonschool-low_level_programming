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
	int i = 0;
	int j = 0;
	int start;

	for (i = 0; str[i] != 0; i++)
		;
	start = (i - 1) / 2 + 1;

	for (j = start; j < i; j++)
	{
		_putchar(str[j]);

	}
	_putchar('\n');
}
