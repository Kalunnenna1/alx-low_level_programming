#include "main.h"
/**
 * _strcat - concatenates two strings
 *@dest: input string 
 *src: input string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	i = 0;

	while (dest[i] != 0)
	{
		i++
	}

	n = 0;

	while (src[n] != 0)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	retutn (dest);
}

