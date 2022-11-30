#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}

new->str = strdup(str);
if (!new->str)
{
free(new);
return (NULL);
}
new->len = _strlen_recursion(new->str);
new->next = *head;
*head = new;

return (new);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen_recursion(char *s)
{
if (*s == 0)
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
