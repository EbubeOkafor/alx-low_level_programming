#include"main.h"
/**
 *_islower- checks if the variable is uppercae or lower case
 *Return: 0 if it is uppercase.
 *@c: value to pass into the function
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	{
		return (0);
	}
}
