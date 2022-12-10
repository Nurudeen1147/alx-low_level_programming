#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A prog for lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 122; n > 96; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
