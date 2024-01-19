#include "main.h"
/**
 * _isalpha - checks alphabetic character
 * @c: character waiting to be checked
 *Return: letter c if 1 and 0 if otherwise
 */
int _isalpha(int c);
{
	return ((c <= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
