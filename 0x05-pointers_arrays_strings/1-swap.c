#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * Desc: Entry
 *@a: pointer
 *@b: pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
