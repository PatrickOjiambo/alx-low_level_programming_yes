#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 *add_node - Adds a node at the beginning of the list
 *@head: Pointer to the head of the list
 *@str: String malloced
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str  == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
