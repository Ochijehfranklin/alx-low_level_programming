#include "main.h"

/**
 * print_times_table - This prints number from 0 to n times table
 * @n: n times table
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = y * x;
				 _putchar(y == 0 ? z + '0' :
                                (z < 10 ? (_putchar(','), _putchar(' '), _putchar(' ')) :
                                    (z < 100 ? (_putchar(','), _putchar(' ')) :
                                            _putchar(','))),
                        _putchar(z < 100 ? (z < 10 ? ' ' : (z / 10) + '0') :
                                           ((z / 100) + '0')),
                        _putchar((z < 100 ? (z < 10 ? z : (z % 10)) : ((z / 10) % 10)) + '0'));
            }
            _putchar('\n');
        }
    }
}


