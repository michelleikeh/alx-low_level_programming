#include "main.h"
/**
 * jack_bauer -prints minutes of the day
 */

void jack_bauer(void)
{
	int      a, b, c, d, e;
	c = 58;

	/* a will take values 0 (48), 1-(49) and 2(50) */
	for (a = 48; a <= 50; a++)
	{
		/* b will take values 0 - 9 (48 -57) */
		for (b = 48; b <= 57; b++)
		{
			/*c will be :- 58 */
			/* d will talk values 0-5 */
			for (d = 48; d <= 53; d++)
			{
				/* e values will be 0-9 */
				for (e = 48; e <= 57; e++)
				{
					/* stop at a=2 and b=4 */
					if (a > 51 && b > 53)
					{
						break;
					}
					else
					{
						_putchar(a);
						_putchar(b);
						_putchar(c);
						_putchar(d);
						_putchar(e);
						_putchar('\n');
					}
				}
			}
		}
	}
}
