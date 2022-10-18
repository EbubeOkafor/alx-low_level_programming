#include"main.h"
/**
 *_islower- checks if the variable is uppercae or lower case
 *Return: 0 if it is uppercase.
 *c- int c
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
	{
		return (0);
	}
}
