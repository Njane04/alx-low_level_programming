#include "main.h"
/**
 * _strcmp - compare string value 
 * @s1: value input
 * @s2: value input
 * Return: s1[a] - s2[a]
 */
int _strcmp(char *s1, char *s2);
{
	int p = 0;
	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p]);
	        return (s1[p] - s2[p]);
	         p++
	}
	return (0);
}
