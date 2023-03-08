/**
 *factorial - Function to print the factorial of a number
 *@n: the number to calculate its factorial
 *Return: the factorial of the number
 */
int factorial(int n)
{

	if (n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);

}
