#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int c, i, k;

	for (c = '0'; <= '9'; i++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (c < i && i < k)
			{
				putchar(c);
				putchar(i);
				putcha(k);

				if (c != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');

return (0);
}

