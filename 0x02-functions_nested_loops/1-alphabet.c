#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Does not return any value
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
