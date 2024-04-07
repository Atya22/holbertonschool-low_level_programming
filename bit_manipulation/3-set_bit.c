#include"main.h"

/**
 * get_bit - gets git value at specific index
 * @index: -holds value for output
 * @n: -holds value for output
 * Return: (a >> index & 1)
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}

