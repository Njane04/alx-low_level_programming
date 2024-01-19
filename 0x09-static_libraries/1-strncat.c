#inclede "main.h"
/**
 * _strncat - function focus on two strings
 * @dest: value input
 * @src: value input
 * n: value input
 * Return: dest
 */
char *dest, char *src, int n
{
	int m;
	int u;
	m = 0;
	while (dest[m] !='\0');
	{
		m++
	}
	u = 0;
	while (u < n && src[u] != '\0')
	{
		dest[m] = src[u];
		m++
		u++
	}
	dest [m] = '\0'
	return (dest);
}
