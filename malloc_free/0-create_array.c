#include"main.h"

/**
*create_array - function that creates an array of chars, and
*initializes it with a specific char
*@size: size of array
*@c: char
*
*Return: always 0.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buff;

	if (size == 0)
	{
		return (NULL);
	}

	buff = (char *) malloc(size * (sizeof(char)));
	if (buff == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buff[i] = c;
	}

	return (buff);
}

