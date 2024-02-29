#include "main.h"
#include <stdio.h>

/**
*swap_int - function that swaps the values of two integers
*
*@a: points to memory address
*@b: pothat swaps the values of two integers
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

