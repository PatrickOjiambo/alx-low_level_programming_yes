/**
 * print_number - prints an integer to stdout
 * @n: the integer to be printed
 *Return: Return void
 */

void print_number(int n)
{
	int digit, reversed = 0;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	while (n > 0)
	{
	digit = n % 10;
	reversed = reversed * 10 + digit;
	n /= 10;
	}
	if (reversed == 0)
	{
	_putchar('0');
	}
	else
	{
		while (reversed > 0)
		{
			digit = reversed % 10;
			_putchar(digit + '0');
			reversed /= 10;
		}
	}
}

