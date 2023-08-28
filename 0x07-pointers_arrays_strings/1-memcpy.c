#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: memory area.
 * @src:  source
 * @n: The number of bytes to copy from @src.
 * Return: A pointer to the destination buffer @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}

	return (dest);
}
