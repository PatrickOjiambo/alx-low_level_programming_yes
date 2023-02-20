/**
 *main-Prints all possible combinations 
 *of single digit numbers
 *uses the putchar function only
 *Return: always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
