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
	unsigned int a;

	a = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

		} /*END WHILE*/


	return (dest);
}
