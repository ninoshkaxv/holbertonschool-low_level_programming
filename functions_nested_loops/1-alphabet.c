#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;

	}
	putchar('\n');

}
