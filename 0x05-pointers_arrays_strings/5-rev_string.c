#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counts = 0;
	int i;

	while (s[counts] != '\0')
	counts++;
	for (i = 0; i < counts; i++)
	{
		counts--;
		rev = s[i];
		s[i] = s[counts];
		s[counts] = rev;
	}
}

