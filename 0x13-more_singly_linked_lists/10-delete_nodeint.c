#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *prev;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }

    while (current != NULL && i < index)
    {
        prev = current;
        current = current->next;
        i++;
    }

    if (current == NULL)
        return (-1);

    prev->next = current->next;
    free(current);

    return (1);
}

