#include "main.h"
/**
*_islower - to check whether a character is lowercase
*@c: The character to be checked
*Return: void
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
		else
		return (0);
}
