#include "main.h"
/*
 *main - prints alphabets
 *
 *description: prints aphabets
 *
 *return 0 (success)
 * */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
