#include "main.h"
#include <stdio.h>

/**
*_isupper - to print if char is uppercase
*@c: character to be checked
*Return:  (1) if upper and (0) is lower
*/
	int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	return (1);
	else
	return (0);
}

