#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_note - Adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the nod
 * Return: The address of the new list or NULL if if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;

if (head != NULL && str != NULL)
{
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);

temp->str = strdup(str);
temp->len = strlen(str);
temp->next = *head;

*head = temp;

return (temp);
}

return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(const char *s)
{
int c = 0;

while (*s)
{
s++;
c++;
}

return (c);
}
