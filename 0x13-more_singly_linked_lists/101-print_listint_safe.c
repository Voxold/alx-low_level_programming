#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const listin_t **_r(const listin_t **list, size_t size, const listin_t)
{
    const listin_t **newlist;
    size_t i;

    newlist = malloc(size * sizeof(listin_t *));
    if (newlist == NULL)
    {
        free(list);
        exit(98);
    }
    for (i=0; i < size - 1;i++)
        newlist[i] = list[i];
    newlist[i] = new;
    free(list);
    return (newlist);

}

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
