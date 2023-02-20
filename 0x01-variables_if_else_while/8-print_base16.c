#include <stdio.h>

/**
 * main - Entry point
 *
 * a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char letter;

	for (x = 0; x < 10; x++)
	putchar((x % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);

	putchar('\n');

	return (0);
}
