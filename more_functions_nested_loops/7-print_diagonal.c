#include"main.h"
/**
*print_diagonal - function that draws a diagonal line on the terminal.
*
*@n: number of times the character \ should be printed
*Return: Always 0.
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		char i;

		for (i = 0; i < n; i++)
		{
			char j;
			for (j =0 ; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

