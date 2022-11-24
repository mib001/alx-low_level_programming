#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to list
 * @head: ptr to head of list
 * @str: string to be added
 * Return: If function fails - NULL
 * Otherwise: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
}
