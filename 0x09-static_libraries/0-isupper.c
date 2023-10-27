#include "main.h"
/**
 * _isupper - checking for upper case characters
 *
 * @c: function parameter
 *
 * Return: zero
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
