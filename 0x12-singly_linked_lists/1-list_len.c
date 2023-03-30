#include "lists.h"
#include <stddef.h>
/**
 *list_len - Returns the number of elements in the list
 *@h: Pints to the head of the list
 *Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
	if (h == 0)
		return (0);
	else
		return (list_len(h->next) + 1);
}
