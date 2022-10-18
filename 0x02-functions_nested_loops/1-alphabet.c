#include"main.h"
/**
 *print_alphabet- prints alphabets in lower case when called
 *
 * Return: no return type.
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while(alpha <= 'z')
		_putchar(alpha);
		alpha++;
	_putchar('\n');
	return;
}
