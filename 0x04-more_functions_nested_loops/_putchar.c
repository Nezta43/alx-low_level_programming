#include "main.h"
/**
 * *_putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	
	_putchar('\n');
}
