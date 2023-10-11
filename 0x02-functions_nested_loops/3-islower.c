#include "main.h"

/**
 * _islower - check if char is lowercase
 * @chr: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int chr)
{
	if (chr >= 'a' && chr <= 'z')
		return (1);
	else
		return (0);
}
