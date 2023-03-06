/**
 *_memcpy - Copies memory from src to dest
 *@n: Parameters
 *@src: source
 *@dest: Destination
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n--)
	{
		*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}

