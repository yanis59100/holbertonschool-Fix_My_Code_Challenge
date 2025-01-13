#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a doubly linked list.
 *
 * @head: A pointer to the first element of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    tmp = *head;

    if (index == 0)
    {
        *head = tmp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(tmp);
        return (1);
    }

    for (i = 0; tmp != NULL && i < index; i++)
        tmp = tmp->next;

    if (tmp == NULL)
        return (-1);

    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;

    if (tmp->prev != NULL)
        tmp->prev->next = tmp->next;

    free(tmp);
    return (1);
}
