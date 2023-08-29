#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * and returns the head node’s data (n)
 * @head: pointer to first node in list
 * Return: data inside the deleted node
 * 0 otherwise if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
