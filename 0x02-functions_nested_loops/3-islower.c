#include "main.h"
/**
 * _islower - function checking lowercase.
 *
 * @c - single letter input
 *
 * return: 1 if c is lowercaser, otherwise, 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
