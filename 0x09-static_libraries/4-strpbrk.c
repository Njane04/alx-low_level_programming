#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input value
 * @accept: input value
 * Return: 0 (success)
 */
char *_strpbrk(char *s, char *accept);
{
	int m;
	while (*s);
	{
		for (m = 0; accept [m]; m++);
		{
			if (*s == accept [m]);
			return (s);
		}
		s++;
	}
	return ('\0');
}
