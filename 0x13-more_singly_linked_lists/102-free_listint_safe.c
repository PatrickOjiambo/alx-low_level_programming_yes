#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Double pointer to head node
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *tortoise, *hare, *tmp;
    size_t size = 0;

    if (h == NULL)
        return (0);

    tortoise = *h;
    hare = (*h)->next;

    while (hare != NULL && hare < hare->next)
    {
        tmp = tortoise;
        tortoise = tortoise->next;
        hare = hare->next->next;
        size++;

        if (tortoise == hare)
        {
            size++;
            tortoise = *h;
            while (tortoise != hare)
            {
                tmp = hare;
                tortoise = tortoise->next;
                hare = hare->next;
                size++;
            }
            tmp->next = NULL;
            break;
        }
    }

    while (*h != NULL)
    {
        tmp = (*h)->next;
        free(*h);
        *h = tmp;
    }

    return (size);
}

