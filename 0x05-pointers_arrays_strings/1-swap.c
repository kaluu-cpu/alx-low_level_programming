#include "main.h"
/**
 * swap_int - swaps value of 2 integers
 * @a: integer to swap
 * @b: second integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
