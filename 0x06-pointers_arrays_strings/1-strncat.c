#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a destination input
 *@src: A pointer to a source input
 *@n: value
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}

dest[a] = '\0';

return (dest);
}
