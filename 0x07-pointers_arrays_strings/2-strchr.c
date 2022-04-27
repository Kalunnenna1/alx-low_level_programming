#include "main.h"

/**
 *_strchr - locate a character in strings
 *@s: strings
 *@c: character to search
 *Return: pointer to first occurence character of c in the string of s
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);/* values null*/
}
