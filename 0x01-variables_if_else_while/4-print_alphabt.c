#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A prog that prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
