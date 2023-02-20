#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	if (alphabet != 'q' && alphabet != 'e')
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
