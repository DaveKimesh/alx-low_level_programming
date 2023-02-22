#include "main.h"
/**
*_isalpha - to check whether a character is uppercase
*@c: The character to be checked
*Return: void
*/
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
		else
		return (0);
}
