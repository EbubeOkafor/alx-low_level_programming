#include<stdio.h>
/**
 *
 * main- entry point of any function
 *
 * Return: 0 when successful
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
