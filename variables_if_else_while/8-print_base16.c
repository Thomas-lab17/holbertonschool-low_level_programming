#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char l;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (l = 'a'; l <= 'f'; l++ )
		putchar(l);
	putchar('\n');
	return (0);
}
