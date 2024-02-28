#include"main.h"
/**
*print_lines - prints 10 times the numbers, from 0 to 14
*
*@n: number of times the character _`
*Return: Always 0.
*/

void print_line(int n)
{
	if (n > 0)
	{
		char i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
