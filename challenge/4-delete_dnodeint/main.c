#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");

    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");

    free_dlistint(head);
    return (0);
}
