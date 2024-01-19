#include "main.h"
/**
 * _strncpy - copy string
 * @dest: value input
 * @src: value input
 * @n: value input
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);
{
	int l =0;
	while (l <n && src[l] != '\0');
	{
		dest[l] = src[l];
		l ++;
	}
	while (l<n);
	{
		dest[b] = '\0';
		l ++
	}
	return (dest);
}

