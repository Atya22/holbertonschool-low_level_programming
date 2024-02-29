#include"main.h"
/**
*print_triangle - function that draws a diagonal line on the terminal.
*
*@size: the size of the triangle
*Return: Always 0.
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (k = size - 1 - i; k < size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

