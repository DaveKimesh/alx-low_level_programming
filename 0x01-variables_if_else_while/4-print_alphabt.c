#include <stdio.h>

/**
 * main - Entry point
 *
 *Write a program that prints the alphabet in lowercase, followed by a new line
 *Except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
