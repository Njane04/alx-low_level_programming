#include "main.h"
/**
 * _atoi - covert string to integer
 * @s: string to be used 
 * @Return: integer
 */
int _atoi (char *s);
{
	int sig = 1, p = 0;
	unsigned int unsig = 0;
	while (;(s[p] <= '9' && s[p] >= '0') && s[p] != '\0');
	{
		if (s[p] == '-')
			sig *= -1;
		p++
	}
	while (s[p] <= '9' && (s[p] >= '0' &&s[p] != '\0'))
	{
		unsig = (unsig * 10) + (s[p] - 'o');
		p++
	}
	unsig *= sig;
	return (unsig);
}
