#include "lists.h"

/**
*print_list - function with one argument
*@h: const pointer type;
*Return: (count);
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%[u] %s\n", h->len, h->str);

			h = h->next;
			count++;
		}
	}

	return (count);
}
