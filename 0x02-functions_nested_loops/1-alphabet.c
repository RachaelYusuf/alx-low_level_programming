#include "main.h"
#include <unistd.h>

/**
 *main - Entry point
 *Return:0
 */

void main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
