#include <stdio.h>
/**
 * main - prints lower and upper case alphabets.
 *return always 0
 */
int main()
{
       	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	if (lc != 'q' && lc != 'e')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
