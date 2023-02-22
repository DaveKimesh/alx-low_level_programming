#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int letter, count;

	count = 0;

	while (count < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		count++;
		_putchar('\n');
	}
}
