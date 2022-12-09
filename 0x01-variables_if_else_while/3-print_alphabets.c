#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char ABC[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;

	for (n = 0; n < 52; n++)
	{
		putchar(ABC[n]);
	}
	putchar('\n');
	return (0);
}
