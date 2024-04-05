#include "lists.h"
/**
*_strlen - gets length of the string
* @s: string
* Return: length of the string
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
* add_node - add new nodes to the list
* @head: current place in the list
* @str: string to add to the head
* Return: pointer to current position in list
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *copy;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(copy);
		return (NULL);
	}
	new->str = copy;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
