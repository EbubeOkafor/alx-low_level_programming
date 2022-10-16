#include<stdio.h>
/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	char hex;
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (hex = 'A'; hex <= 'F'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
