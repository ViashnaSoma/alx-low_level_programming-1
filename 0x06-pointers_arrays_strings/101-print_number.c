#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @s: String pointer
 * Return: S - Encoded string
 */

void print_number(int n)
{
	int negative = 0, rem, rev = 0;
	
	if (n < 0)
	{
		n = n * -1;
		negative = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	if (negative > 0)
	{
		_putchar('-');
	}
	while (rev > 0)
	{
		rem = rev % 10;
		_putchar(rem + 48);
		rev = rev / 10;
	}
}
