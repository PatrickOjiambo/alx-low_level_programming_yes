/**
 *_pow_recursion - Prints x to the power y
 *@x: base number
 *@y: The power number
 *Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	int half_pow;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y % 2 == 0)
	{
		half_pow = _pow_recursion(x, y / 2);
		return (half_pow * half_pow);
	}
	else if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
