#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @chr: the character to be checked
 * Return: 1 if chr is a letter, 0 otherwise
 */
int _isalpha(int chr)
{
	return ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z'));
}
