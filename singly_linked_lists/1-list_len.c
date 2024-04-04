#include "lists.h"

/**
*list_len - function with one argument
*@h: const pointer type;
*Return: (count);
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{

		h = h->next;
		count++;
	}

	return (count);
}
