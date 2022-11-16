#include <unistd.h>

/**
 * _putcher - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succee 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
