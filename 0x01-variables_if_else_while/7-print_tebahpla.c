#include <stdio.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
