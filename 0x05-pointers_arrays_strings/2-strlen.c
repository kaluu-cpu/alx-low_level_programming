#include "main.h"
/**
 * _strlen - returns string length
 * @s: string to count
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}
