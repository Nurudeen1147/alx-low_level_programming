#include "main.h"
/**
 * _memcpy - Memory copy function.
 * @dest: To another memory area.
 * @src: Initial memory are.
 * @n: number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];

	}
	return (dest);
}
