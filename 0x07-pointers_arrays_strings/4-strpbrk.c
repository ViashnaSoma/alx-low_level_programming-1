#include "main.h"

/**
 * _strpbrk - Checks for first occurence of byte
 * @s: String pointer for string
 * @accept: bytes to accept
 * Return: s - string pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int count, count1 = 0;

	while (*(s + count) != 0)
	{
		count = 0;
		while (*(accept + count1) != 0)
		{
			if (*(s + count) == *(accept + count1))
			{
				return (s + count);
			}
			count1++;
		}
		count++;
	}
	return (NULL);
}
