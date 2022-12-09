#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char ABC[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(ABC[n]);
	}
	putchar('\n');
	return (0);
}
