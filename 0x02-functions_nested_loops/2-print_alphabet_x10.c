#include "main.h"

/**
*print_alphabet_x10 - a function that prints 10 times the alphabet,
* in lowercase, followed by a new line
*
*Return: void
*/
void print_alphabet_x10(void)
{
	int a = 0;
	char ch;

	while (a < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
		_putchar('\n');
	}
	a++;
}
