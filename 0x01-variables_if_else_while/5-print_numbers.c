#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A prog that prints single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
