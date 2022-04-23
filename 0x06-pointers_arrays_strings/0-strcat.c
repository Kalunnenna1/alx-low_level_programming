#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a destination input
 *@src: A pointer to a source input
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}
