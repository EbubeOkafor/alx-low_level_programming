#include"main.h"
/**
 *print_sign- prints the sign
 *Return: 0 if n = 0
 *@n- value to be passed to function
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	if (n == 0)
		_putchar('0');
		return (0);
	if (n < 0)
		_putchar('-');
}
