#include <stdio.h>
#include "6-abs."
#include "main.h"
/**
 * print_to_98 - functions that printst prints numbers from n to 98.
 * @n: number input
 * Return: Always 0 (success).
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
	}
	printf("\n");
}
