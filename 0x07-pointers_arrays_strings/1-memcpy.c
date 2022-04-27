include "main.h"
/**
 *_memcpy - copies number bytes from address to address
 *@dest: destination data to be copied
 *@src: source data to be copied too
 *@n: byte of memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
