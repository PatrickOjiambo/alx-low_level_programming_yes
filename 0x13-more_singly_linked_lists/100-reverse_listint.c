#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer to the head node.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	return (*head);
}

