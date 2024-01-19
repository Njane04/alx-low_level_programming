#include "main.h"
/**
 * _strchr - entry point
 * @s: input value
 * @c: value input 
 * Retur: 0 (success)
 */
char *_strchr(char *s, char c);
{
	int p = 0;
	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
		return (&s[p]);
	}
	return (0)
}

