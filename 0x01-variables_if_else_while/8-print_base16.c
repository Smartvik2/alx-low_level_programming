#include <stdio.h>

/**
 * main-program entry point.
 *
 * return:0 if no error, non zero if error.
 *
 **/

int main(void)
{
	int i;

	char hexvalues[] =
		"012345679abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
