#include"function_pointers.h"
#include<stddef.h>


/**
* int_index -entry point,searches for an int
* @array: -points to the respective array
* @size: -holds value for output
* @cmp: -points to the respective func
* Return: (i)
*/



int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!cmp || !array || size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(*(array + i)))
		{
			return (i);
		}
	}
	return (-1);
}
