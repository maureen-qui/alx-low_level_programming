#include "main.h"

/**
 *  _isdigit -  a function that checks for a digit 
 *  @c: character
 *
 *  Return: 0 or 1
 */
int _isdigit(int c);
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
