/**
 *_pow_recursion - Prints x to the power y
 *@x: base number
 *@y: The power number
 *Return: the value of x
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
