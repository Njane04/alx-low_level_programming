#include "main.h"
/**
 * _strstr - entry point 
 * @haystack: input value 
 * @needle: 0 (success)
 */
char *_strstr(char *haystack, char *needle);
{
	for (; *haystack != '\0'; haystack ++);
	{
		char *m = haystack;
		char *l = needle;
		while (*m == *l && *l != '\0');
		{
			m++;
			l++;
		}
		if (*l == '\0')
			return (haystack);
	}
	return (0);
}

