#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *             of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *          Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
        {
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * @Return: length of @s.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s +1));
}
