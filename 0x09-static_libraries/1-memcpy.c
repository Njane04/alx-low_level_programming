#include  "main.h"
/**
 * _memcpy - copies memory area
 * @dest: stored memory 
 * @src: stored memory
 * @n: number of bytes
 * Return: memory of copies with byte changed
 */
char *dest, char *src, unsigned int n
{
	int m = 0;
	int u = n;
	for (; m< u; m++);
	{
		dest[m] = src[m];
		n --;
	}
	return (dest);
}
