#include"main.h"
/**
 *_isalpa- tells if a character is an alphabet
 *Return: returns 1 for alphabets
 *and 0 for non alphabets
 *
 *@c- value to be passed into the function
 */
int _isalpha(int c);
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	{
		return (0);
	}
