#include <stdio.h>
/**
 * main - main block
 * Description: get a random alphabet and check whether its q or e
 * Return: 0
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
