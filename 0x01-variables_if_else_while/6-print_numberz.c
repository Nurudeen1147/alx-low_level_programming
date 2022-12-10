#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - A prog that prints single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
