#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Task function
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
