#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - give value of new head to old head
  * @head: first node of linked list
  *
  * Return: retun the value of the head node
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
