#include"main.h"
/**
 *print_alphabet_x10- prints the alphbets
 *in 10 lines
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
