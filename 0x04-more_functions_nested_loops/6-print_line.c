#include "main.h"
/**
  * print_line - a function that draws a straight line in the terminal
  * @n: Number of lines to draw
  * Return: print \n if n is 0 or less
  */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
