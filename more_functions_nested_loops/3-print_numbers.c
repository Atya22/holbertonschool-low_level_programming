#include "main.h"

/*
*print_numbers -  function that prints the numbers,
*from 0 to 9, followed by a new line
*
*Return: Always 0.
*/

void print_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
