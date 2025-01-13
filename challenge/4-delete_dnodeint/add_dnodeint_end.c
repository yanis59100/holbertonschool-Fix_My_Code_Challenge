#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a doubly linked list
 *
 * @head: A pointer to the pointer to the first element of the list
 * @n: The integer to store in the new element
 *
 * Return: A pointer to the new element, or NULL if the memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *temp;

    if (head == NULL)
    {
        return (NULL);
    }

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        return (new_node);
    }

    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;

    return (new_node);
}
